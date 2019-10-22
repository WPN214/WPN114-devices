import QtQuick 2.12
import QtQuick.Window 2.12
import WPN114.Audio 1.1 as WPN114
import WPN114.Audio.Devices 1.1

Window
{
    visible: true
    width: 640
    height: 480
    title: qsTr("pushdevice1-generic")
    color: "black"

    WPN114.Graph
    {
        external.backend: WPN114.External.Jack
        external.running: true
        external.onConnected:
        {
            push_model.lcd_clear();

            push_model.set_button(CommandButtons.OctaveDown, ButtonLightingMode.Full);
            push_model.set_button(CommandButtons.OctaveUp, ButtonLightingMode.Full);
            push_model.set_button(CommandButtons.Select, ButtonLightingMode.Full);
            push_model.set_button(CommandButtons.Shift, ButtonLightingMode.Full);
            push_model.set_button(CommandButtons.Accent, ButtonLightingMode.Dim);
//            push_model.set_touch_wheel()
            push_model.display();
            push_model.lcd_display(0, 31, "WPN214");
        }

        PushChromaticModel
        {
            id: push_model
            visible: true
            octave: 3
            // these are the selected layout colors
            // check the PadColor enum in order to change them
            dark: 0; medium: 101; bright: 86;
            pressed: PadColor.AppleGreen

            // these set the dimensions of the grid (default values)
            x: 0; y: 0;
            width: 8; height: 8

//            clock_in.assign: WPN114.SimpleClock { tempo: 120 }

            dev_in.assign:
                WPN114.Input {
                    name: "push_in"
                    type: WPN114.Input.Midi
                    channels: 0
//                    connections: ["Ableton Push", 1]
                    WPN114.VelocityMap { }
                }

            dev_out.assign:
                WPN114.Output {
                    name: "dev_out";
                    type: WPN114.Output.Midi;
                    channels: 0
//                    connections: ["Ableton Push", 1]
                }

            aux_out.assign:
                WPN114.Output {
                    name: "aux_out";
                    type: WPN114.Output.Midi;
                    channels: 1
//                    connections: "REAPER"
                }
        }
    }
}
