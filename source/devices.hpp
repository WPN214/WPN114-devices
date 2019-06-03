#ifndef DEVICE_ENUMS_HPP
#define DEVICE_ENUMS_HPP

#include <QObject>
#include <QQmlParserStatus>
#include <QtDebug>

namespace Ableton
{
namespace Push
{

//-------------------------------------------------------------------------------------------------------
class CommandButtons : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT

public:

    enum Values
    {
        Play                    = 85,
        Record                  = 86,
        New                     = 87,
        Duplicate               = 88,
        Automation              = 89,
        FixedLength             = 90,
        Quantize                = 116,
        Double                  = 117,
        Delete                  = 118,
        Undo                    = 119,
        Metronome               = 9,
        TapTempo                = 3,
        LeftArrow               = 44,
        RightArrow              = 45,
        UpArrow                 = 46,
        DownArrow               = 47,
        Select                  = 48,
        Shift                   = 49,
        Note                    = 50,
        Session                 = 51,
        AddEffect               = 52,
        AddTrack                = 53,
        OctaveDown              = 54,
        OctaveUp                = 55,
        Repeat                  = 56,
        Accent                  = 57,
        Scales                  = 58,
        User                    = 59,
        Mute                    = 60,
        Solo                    = 61,
        Next                    = 62,
        Previous                = 63,
        Device                  = 110,
        Browse                  = 111,
        Track                   = 112,
        Clip                    = 113,
        Volume                  = 114,
        PanSend                 = 115,
        Fourth                  = 36,
        FourthT                 = 37,
        Eighth                  = 38,
        EighthT                 = 39,
        Sixteenth               = 40,
        SixteenthT              = 41,
        ThirtySecond            = 42,
        ThirtySecondT           = 43,
        Master                  = 28,
        Stop                    = 29
    };

    Q_ENUM (Values)
};

//-------------------------------------------------------------------------------------------------------
class ToggleLightingMode : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT

public:

    enum Values
    {
        Off                 = 0,
        RedDim              = 1,
        RedDimSlow          = 2,
        RedDimFast          = 3,
        RedFull             = 4,
        RedFullSlow         = 5,
        RedFullFast         = 6,
        OrangeDim           = 7,
        OrangeDimSlow       = 8,
        OrangeDimFast       = 9,
        OrangeFull          = 10,
        OrangeFullSlow      = 11,
        OrangeFullFast      = 12,
        YellowDim           = 13,
        YellowDimSlow       = 14,
        YellowDimFast       = 15,
        YellowFull          = 16,
        YellowFullSlow      = 17,
        YellowFullFast      = 18,
        GreenDim            = 19,
        GreenDimSlow        = 20,
        GreenDimFast        = 21,
        GreenFull           = 22,
        GreenFullSlow       = 23,
        GreenFullFast       = 24
    };

    Q_ENUM (Values)

};

//-------------------------------------------------------------------------------------------------------
class ButtonLightingMode : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT
    public:

    enum Values
    {
        Off = 0,
        Dim = 1,
        DimBlinkSlow = 2,
        DimBlinkFast = 3,
        Full = 4,
        FullBlinkSlow = 5,
        FullBlinkFast = 6
    };

    Q_ENUM (Values)
};

//-------------------------------------------------------------------------------------------------------
class ToggleContext : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT
    public:

    enum Values
    {
        TrackEnable  = 0,
        TrackMute    = 1,
        TrackSolo    = 2
    };

    Q_ENUM (Values)
};

//-------------------------------------------------------------------------------------------------------
class PadLightingMode : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT
    public:

    enum Values
    {
        Off          = 0,
        Fadein24     = 1,
        Fadein16     = 2,
        Fadein8      = 3,
        Fadein4      = 4,
        Fadein2      = 5,
        Pulse24      = 6,
        Pulse16      = 7,
        Pulse8       = 8,
        Pulse4       = 9,
        Pulse2       = 10,
        Blink24      = 11,
        Blink16      = 12,
        Blink8       = 13,
        Blink4       = 14,
        Blin2        = 15
    };

    Q_ENUM (Values)
};

//-------------------------------------------------------------------------------------------------------
class PadColor : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT

    public:
    enum Values
    {
        Black                   = 0,
        LightestWhite           = 1,
        LighterWhite            = 2,
        White                   = 3,
        Salmon                  = 4,
        Red                     = 5,
        DarkerRed               = 6,
        DarkestRed              = 7,
        Beige                   = 8,
        Orange                  = 9,
        DarkerOrange            = 10,
        DarkestOrange           = 11,
        Gold                    = 12,
        Yellow                  = 13,
        DarkerYellow            = 14,
        DarkestYellow           = 15,
        AppleGreen              = 16,
        GrassGreen              = 17,
        DarkerGrassGreen        = 18,
        DarkestGrassGreen       = 19,
        LightBlueGreen          = 20,
        Green                   = 21,
        DarkerGreen             = 22,
        DarkestGreen            = 23,
        SeaGreen                = 24,
        BlueGreen               = 25,
        GlacierGreen            = 26,
        DarkBlueGreen           = 27,
        BlueSteel               = 28,
        BlueGreen2              = 29,
        DarkBlueGreen2          = 30,
        DarkestBlueGreen        = 31,
        BlueSteel2              = 32,
        FluoBlue                = 33,
        DarkBlueGreen3          = 34,
        DarkestBlueGreen2       = 35,
        LightSkyBlue            = 36,
        SkyBlue                 = 37,
        DarkSkyBlue             = 38,
        NightSkyBlue            = 39,
        SunsetBlue              = 40,
        SkyBlue2                = 41,
        DarkSkyBlue2            = 42,
        NightSkyBlue2           = 43,
        LightPurple             = 44,
        PurplishBlue            = 45,
        DarkPurplishBlue        = 46,
        DarkestPurplishBlue     = 47,
        LightPurple2            = 48,
        Purple                  = 49,
        DarkPurple              = 50,
        DarkestPurple           = 51,
        LightFuscia             = 52,
        Fuscia                  = 53,
        DarkFuscia              = 54,
        DarkestFuscia           = 55,
        LipsPink                = 56,
        Pink                    = 57,
        DarkPink                = 58,
        DarkestPink             = 59,
        OrangeCandy             = 60,
        OrangeMandarine         = 61,
        OrangeMango             = 62,
        YellowGreen             = 63,
        DarkGreen               = 64
    };

    Q_ENUM (Values)

};

//-------------------------------------------------------------------------------------------------------
class ToggleRow : public QObject
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT
    public:

    enum Values
    {
        Upper   = 20,
        Lower   = 102
    };

    Q_ENUM (Values)

};

//-------------------------------------------------------------------------------------------------------
class ChromaticModel : public QObject, public QQmlParserStatus
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int dark MEMBER m_dark)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int medium MEMBER m_medium)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int bright MEMBER m_bright)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int pressed MEMBER m_pressed)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int octave MEMBER m_octave WRITE set_octave)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (bool hold MEMBER m_hold)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (bool visible MEMBER m_visible WRITE set_visible)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int x MEMBER m_x WRITE set_x)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int y MEMBER m_y WRITE set_y)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int width MEMBER m_w WRITE set_x)

    //-------------------------------------------------------------------------------------------------------
    Q_PROPERTY (int height MEMBER m_h WRITE set_h)

    //-------------------------------------------------------------------------------------------------------
    Q_INTERFACES (QQmlParserStatus)

    //-------------------------------------------------------------------------------------------------------
    uint8_t m_dark = 0, m_medium = 0, m_bright = 0, m_pressed = 0;
    uint8_t m_x = 0, m_y = 0, m_w = 8, m_h = 8;

    uint8_t m_octave = 4;
    bool m_hold = false;
    bool m_visible = false;
    bool m_complete = false;

    //-------------------------------------------------------------------------------------------------------
    using padnote_t    = std::array<uint8_t, 3>;
    using padvector_t  = std::array<int8_t, 2>;

    //-------------------------------------------------------------------------------------------------------
    std::vector<padnote_t>
    grid;

    //-------------------------------------------------------------------------------------------------------
    enum padnote_layout
    { PADNO, NOTENO, COLORNO };

    //-------------------------------------------------------------------------------------------------------
    std::vector<uint8_t>
    held_notes;

    //-------------------------------------------------------------------------------------------------------
    struct ghost_note
    //-------------------------------------------------------------------------------------------------------
    {
        uint8_t index;
        uint8_t octave;

        bool operator==(ghost_note const& other)
        {
            return index == other.index && octave == other.octave;
        }
    };

    //-------------------------------------------------------------------------------------------------------
    std::vector<uint8_t>
    active_notes;

    //-------------------------------------------------------------------------------------------------------
    std::vector<ghost_note>
    ghost_notes;

    //-------------------------------------------------------------------------------------------------------
    uint8_t
    color_layout[12];

public:

    //-------------------------------------------------------------------------------------------------------
    ChromaticModel()
    //-------------------------------------------------------------------------------------------------------
    {
        held_notes.reserve(32);
        active_notes.reserve(32);
        ghost_notes.reserve(32);
    }
    // default constructor

    //-------------------------------------------------------------------------------------------------------
    virtual void
    classBegin() override {}
    // unused interface override

    //-------------------------------------------------------------------------------------------------------
    virtual void
    componentComplete() override
    //-------------------------------------------------------------------------------------------------------
    {
        // TODO: shift given base note
        color_layout[0] = m_bright;
        color_layout[1] = m_dark;
        color_layout[2] = m_medium;
        color_layout[3] = m_dark;
        color_layout[4] = m_medium;
        color_layout[5] = m_medium;
        color_layout[6] = m_dark;
        color_layout[7] = m_medium;
        color_layout[8] = m_dark;
        color_layout[9] = m_medium;
        color_layout[10] = m_dark;
        color_layout[11] = m_medium;

        update_grid();
        m_complete = true;

        if (m_visible)
            display();
    }

    virtual ~ChromaticModel() override
    {
        if (m_visible)
            hide();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_x(uint8_t x)
    // sets pad grid's x offset
    //-------------------------------------------------------------------------------------------------------
    {
        m_x = x;
        if (m_complete)
            update_grid();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_y(uint8_t y)
    // sets pad grid's y offset
    //-------------------------------------------------------------------------------------------------------
    {
        m_y = y;
        if (m_complete)
            update_grid();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_w(uint8_t w)
    // sets pad grid's width
    //-------------------------------------------------------------------------------------------------------
    {
        m_w = w;
        if (m_complete)
            update_grid();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_h(uint8_t h)
    // sets pad grid's height
    //-------------------------------------------------------------------------------------------------------
    {
        m_h = h;
        if (m_complete)
            update_grid();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_visible(bool visible)
    //-------------------------------------------------------------------------------------------------------
    {
        if (!m_complete) {
            m_visible = visible;
            return;
        }

        if (!m_visible && visible)
            display();

        else if (m_visible && !visible)
            hide();

        m_visible = visible;
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    display()
    // light on device'selected grid pads
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& n : grid)
             padOn(n[PADNO], n[COLORNO], 0);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    hide()
    // light off device'selected grid pads
    //-------------------------------------------------------------------------------------------------------
    {        
        for (auto& n : grid)
             padOn(n[PADNO], 0, 0);
    }

    //-------------------------------------------------------------------------------------------------------
    void
    update_grid()
    // this should be called whenever a change in the grid's dimensions occurs
    // or in the grid's xy offset
    //-------------------------------------------------------------------------------------------------------
    {
        grid.clear();
        int8_t cphs = 0, nphs = 0;

        // [56 ] [57 ] [58 ] [59 ] [60 ] [61 ] [62 ] [63 ]  ^
        // [48 ] [49 ] [50 ] [51 ] [52 ] [53 ] [54 ] [55 ]  |
        // [40 ] [41 ] [42 ] [43 ] [44 ] [45 ] [46 ] [47 ]  |
        // [32 ] [33 ] [34 ] [35 ] [36 ] [37 ] [38 ] [39 ]  |
        // [24 ] [25 ] [26 ] [27 ] [28 ] [29 ] [30 ] [31 ]  |
        // [16 ] [17 ] [18 ] [19 ] [20 ] [21 ] [22 ] [23 ]  |
        // [ 8 ] [ 9 ] [10 ] [11 ] [12 ] [13 ] [14 ] [15 ]  |
        // [ 0 ] [ 1 ] [ 2 ] [ 3 ] [ 4 ] [ 5 ] [ 6 ] [ 7 ]  y

        // -----------------------------------------------> x

            for (uint8_t y = 0; y < m_h; ++y) {
            for (uint8_t x = 0; x < m_w; ++x)
            {
                if (cphs == 12)
                    cphs = 0;
                else if (cphs < 0)
                    cphs += 12;

                // padno    = 0-63, see above
                // noteno   = the note (0-63) pad is mapped to
                //            meaning a note can be triggered by two different pads

                uint8_t padno    = (m_y+y)*8+m_x+x;
                uint8_t colorno  = color_layout[cphs];
                uint8_t noteno   = nphs;

                cphs++; nphs++;
                grid.push_back({padno, noteno, colorno});
            }

            // wrapped/mirror padding
            if (m_w > 5) {
                cphs -= (m_w-5);
                nphs -= (m_w-5);
            }
        }
    }

    //-------------------------------------------------------------------------------------------------------
    uint8_t
    lookup_note(uint8_t pad_index)
    // returns the note index mapped to target pad
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad: grid)
            if (pad[PADNO] == pad_index)
                return pad[NOTENO];

        assert(false);
    }

    //-------------------------------------------------------------------------------------------------------
    uint8_t
    lookup_color(uint8_t pad_index)
    // returns color mapped to target pad
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad : grid)
            if (pad[PADNO] == pad_index)
                return pad[COLORNO];

        assert(false);
    }

    //-------------------------------------------------------------------------------------------------------
    padvector_t
    lookup_pads(uint8_t note)
    // returns each pad mapped to target note
    //-------------------------------------------------------------------------------------------------------
    {        
        padvector_t res = { -1, -1 };
        // see next function
        uint8_t i = 0;                

        for (auto& n : grid) {
            if (n[NOTENO] == note) {
                res[i] = n[PADNO];
                ++i;
            }
        }

        return res;
    }

    //-------------------------------------------------------------------------------------------------------
    void
    output_pads(padvector_t& v, uint8_t color, uint8_t mode)
    // as padvector_t will always have two elements
    // we output only those >= 0
    // this will prevent dynamic allocation
    //-------------------------------------------------------------------------------------------------------
    {
        for (uint8_t n = 0; n < 2; ++n)
            if (v[n] >= 0)
                padOn(v[n], color, mode);
            else return;
    }

    //-------------------------------------------------------------------------------------------------------
    // OUTPUT SIGNALS
    //-------------------------------------------------------------------------------------------------------

    Q_SIGNAL void
    noteOn(unsigned int index, unsigned int velocity);

    Q_SIGNAL void
    noteOff(unsigned int index, unsigned int velocity);

    Q_SIGNAL void
    aftertouch(unsigned int index, unsigned int value);

    Q_SIGNAL void
    padOn(unsigned int index, unsigned int color, unsigned int mode);

    //-------------------------------------------------------------------------------------------------------
    void
    update_note(uint8_t note, uint8_t oct, bool incdec, uint8_t mode)
    // this is used when octave has changed
    //-------------------------------------------------------------------------------------------------------
    {
        uint8_t n0 = note-oct*12;

        // turn off old pads
        if (n0 && n0 < 63) {
            auto pads  = lookup_pads(n0);
            auto color = lookup_color(pads[0]);

            output_pads(pads, color, 0);
        }

        int8_t n1 = note-(m_octave+incdec)*12;

        // if new pad is out of the grid's bounds
        // do nothing
        if (n1 < 0 || n1 > 63)
            return;

        // turn on updated pads
        auto pads  = lookup_pads(n1);
        auto color = lookup_pads(pads[0]);

        output_pads(pads, m_pressed, mode);
    }

    //-------------------------------------------------------------------------------------------------------
    void
    set_octave(uint8_t octave)
    // TODO: fix this, make it not only ++ or --
    //-------------------------------------------------------------------------------------------------------
    {
        if (octave > m_octave) {
            update_octave(1);
        } else if (octave < m_octave){
            update_octave(0);
        }

        m_octave = octave;
    }

    //-------------------------------------------------------------------------------------------------------
    void
    update_octave(bool change)
    // TODO: fix this as well
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& ghost : ghost_notes)
            update_note(ghost.index, m_octave, change, 0);

        for (auto& held : held_notes)
            update_note(held, m_octave, change, PadLightingMode::Pulse2);

        for (auto& active : active_notes)
        {
            ghost_note ghost;
            ghost.index = active;
            ghost.octave = m_octave;
            update_note(active, m_octave, change, 0);
        }
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    note_on(unsigned int n0, unsigned int velocity)
    // input note on receiver function, directly from device
    // n0 is normalized from 0 to 63, meaning the '36' offset has to be removed first
    //-------------------------------------------------------------------------------------------------------
    {
        uint8_t note = lookup_note(n0);
        auto pads = lookup_pads(note);

        note += m_octave*12;

        // if note is registered as a 'held' note, do nothing
        for (auto& held : held_notes)
            if (note == held)
                return;

        // output note
        noteOn(note, velocity);
        active_notes.push_back(note);

        // device feedback out
        output_pads(pads, m_pressed, 0);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    note_off(unsigned int n0, unsigned int velocity)
    // input note off receiver function, directly from device
    // n0 is normalized from 0 to 63, meaning the '36' offset has to be removed first
    //-------------------------------------------------------------------------------------------------------
    {
        auto note   = lookup_note(n0);
        auto color  = lookup_color(n0);
        auto pads   = lookup_pads(note);

        note *= m_octave*12;

        // if note is registered as a 'held note', erase it
        std::remove(held_notes.begin(), held_notes.end(), note);

        // if select button is pressed, register note as 'held'
        if (m_hold)
        {
            held_notes.push_back(note);
            auto plm = static_cast<uint8_t>(PadLightingMode::Pulse2);

            output_pads(pads, color, plm);
            return;
        }

        // if active, erase from active notes
        if (std::find(active_notes.begin(), active_notes.end(), note) != active_notes.end())
            std::remove(active_notes.begin(), active_notes.end(), note);
        else {
           // else, look for ghost notes
            auto n1 = lookup_note(n0);
            ghost_note* rem = nullptr;

            for (auto& ghost : ghost_notes)
            {
                auto candidate = n1+ghost.octave*12;
                if (candidate == ghost.index)
                {
                    note = candidate;
                    pads = lookup_pads(candidate-m_octave*12);
                    rem = &ghost;
                    break;
                }
            }

            if (rem) std::remove(ghost_notes.begin(), ghost_notes.end(), *rem);
        }

        noteOff(note, velocity);
        output_pads(pads, color, 0);
    }
};

}
}


#endif // DEVICE_ENUMS_HPP
