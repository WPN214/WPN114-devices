#ifndef DEVICE_ENUMS_HPP
#define DEVICE_ENUMS_HPP

#include <QObject>
#include <QQmlParserStatus>
#include <QtDebug>
#include <wpn114audio/graph.hpp>

//-------------------------------------------------------------------------------------------------------
namespace Ableton {
namespace Push {
//-------------------------------------------------------------------------------------------------------
class CommandButtons : public QObject
// these are the CC indexes
// each button outputs 127 (when pressed) and 0 (when released)
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
        Off                 = 0,
        Dim                 = 1,
        DimBlinkSlow        = 2,
        DimBlinkFast        = 3,
        Full                = 4,
        FullBlinkSlow       = 5,
        FullBlinkFast       = 6
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
        Blink2       = 15
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
// CC index offset for upper and lower toggle rows
// upper row will go from 20 to 27
// lower row will go from 102 to 109
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
class ChromaticModel : public Node
// emulates ableton push 1 chromatic note layout (with a few additions, like held notes
// and custom color layout)
//-------------------------------------------------------------------------------------------------------
{
    Q_OBJECT

    WPN_DECLARE_DEFAULT_MIDI_INPUT (dev_in, 1)
    WPN_DECLARE_MIDI_INPUT(aux_in, 1)

    WPN_DECLARE_DEFAULT_MIDI_OUTPUT(dev_out, 1)
    WPN_DECLARE_MIDI_OUTPUT(aux_out, 1)

    // TODO: for Arpeggiator and Repeater functions
    WPN_DECLARE_DEFAULT_AUDIO_INPUT(clock_in, 1)

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
    using note_t       = byte_t;
    using octave_t     = byte_t;
    using color_t      = byte_t;
    using padnote_t    = std::array<uint8_t, 3>;

    //-------------------------------------------------------------------------------------------------------
    color_t
    m_dark      = 0,
    m_medium    = 0,
    m_bright    = 0,
    m_pressed   = 0;

    uint8_t
    m_x = 0,
    m_y = 0,
    m_w = 8,
    m_h = 8;

    octave_t
    m_octave = 4;

    bool
    m_hold      = false,
    m_visible   = false,
    m_complete  = false;

    //-------------------------------------------------------------------------------------------------------
    std::vector<padnote_t>
    grid;

    //-------------------------------------------------------------------------------------------------------
    enum
    padnote_layout { padno, noteno, colorno };

    //-------------------------------------------------------------------------------------------------------
    struct ghost_note
    //-------------------------------------------------------------------------------------------------------
    {
        note_t index;
        octave_t octave;

        bool
        operator==(ghost_note const& other) {
            return index == other.index &&
                   octave == other.octave;
        }
    };

    //-------------------------------------------------------------------------------------------------------
    struct padvector_t { byte_t npads = 0, pads[2] = { 0, 0 }; };

    //-------------------------------------------------------------------------------------------------------
    std::vector<note_t>
    active_notes,
    held_notes;

    //-------------------------------------------------------------------------------------------------------
    std::vector<ghost_note>
    ghost_notes;

    midibuffer
    m_async_buffer;

    //-------------------------------------------------------------------------------------------------------
    color_t
    color_layout[12];

public:

    //-------------------------------------------------------------------------------------------------------
    ChromaticModel()
    //-------------------------------------------------------------------------------------------------------
    {
        held_notes.reserve(32);
        active_notes.reserve(32);
        ghost_notes.reserve(32);
        m_name = "PushChromaticModel";
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

        Node::componentComplete();
    }

    //-------------------------------------------------------------------------------------------------------
    virtual
    ~ChromaticModel() override
    //-------------------------------------------------------------------------------------------------------
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
    // this is asynchronous
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad : grid)            
            m_async_buffer.reserve(0x90, 0, pad[padno]+36, pad[colorno]);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    hide()
    // light off device'selected grid pads
    // this is asynchronous
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad : grid)
            m_async_buffer.reserve(0x90, 0, pad[padno]+36, (byte_t)0);
    }

    //-------------------------------------------------------------------------------------------------------
    void
    update_grid()
    // this should be called whenever a change in the grid's
    // dimensions or coordinates occurs
    //-------------------------------------------------------------------------------------------------------
    {
        grid.clear();
        int8_t cphs = 0, nphs = 0;

            for (uint8_t y = 0; y < m_h; ++y) {
            for (uint8_t x = 0; x < m_w; ++x)
            {
                if (cphs == 12)
                    cphs = 0;
                else if (cphs < 0)
                    cphs += 12;

                // padno    = 0-63 (given current width, height and xy offsets)
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
    note_t
    lookup_note(note_t n0)
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad : grid)
            if (pad[padno] == n0)
                return pad[noteno];

        return 0;
    }

    //-------------------------------------------------------------------------------------------------------
    padvector_t
    lookup_pads(note_t note)
    //-------------------------------------------------------------------------------------------------------
    {
        padvector_t pvec;

        for (auto& pad : grid)
            if (pad[noteno] == note && pvec.npads < 2) {
                pvec.pads[pvec.npads] = pad[padno];
                pvec.npads++;
            } else if (pvec.npads == 2) break;

        return pvec;
    }

    //-------------------------------------------------------------------------------------------------------
    color_t
    lookup_color(note_t pad_index)
    //-------------------------------------------------------------------------------------------------------
    {
        for (auto& pad : grid)
            if (pad[padno] == pad_index)
                return pad[colorno];
        return 0;
    }

    //-------------------------------------------------------------------------------------------------------
    void
    output_pads(padvector_t pvec, color_t color, byte_t mode, vector_t frame, midibuffer& dev_out)
    //-------------------------------------------------------------------------------------------------------
    {
        for (byte_t n = 0; n < pvec.npads; ++n)
            dev_out.reserve(0x90+mode, frame, pvec.pads[n]+36, color);
    }

    //-------------------------------------------------------------------------------------------------------
     void
     set_octave(uint8_t octave)
     // updates current notes position if octave changes
     //-------------------------------------------------------------------------------------------------------
     {
         if (octave >= 0 && octave < 10 &&
             octave != m_octave) {
             m_octave = octave;
         }
     }

    //-------------------------------------------------------------------------------------------------------
    void
    update_octave(int8_t delta, vector_t frame, midibuffer& dev_out)
    // update active and held notes
    //-------------------------------------------------------------------------------------------------------
    {
        if (m_octave+delta == 0 || m_octave+delta == 10)
            return;

        for (auto& ghost : ghost_notes)
            update_note(ghost.index, delta, 0, frame, dev_out);

        for (auto& held : held_notes)
            update_note(held, delta, PadLightingMode::Pulse2, frame, dev_out);

        for (auto& active : active_notes) {
            // all active notes become 'ghost notes'
            ghost_note ghost = { active, m_octave };
            ghost_notes.push_back(ghost);
            update_note(active, delta, 0, frame, dev_out);
        }

        active_notes.clear();
        m_octave += delta;
    }

    //-------------------------------------------------------------------------------------------------------
    void
    update_note(note_t note, int8_t oct_d,
                uint8_t mode, vector_t frame,
                midibuffer& dev_out)
    // this is used when octave has changed
    //-------------------------------------------------------------------------------------------------------
    {
        int8_t n0 = note-m_octave*12;

        // these are the min/max n0 values
        // contained in the current grid
        uint8_t nmin = grid.front()[noteno];
        uint8_t nmax = grid.back()[noteno];

        if (n0 >= nmin && n0 <= nmax) {
            auto pads  = lookup_pads(n0);
            auto color = lookup_color(pads.pads[0]);
            output_pads(pads, color, 0, frame, dev_out);
        }

        int8_t n1 = note-(m_octave+oct_d)*12;

        // if new pad is out of the grid's bounds
        // do nothing
        if (n1 < nmin || n1 > nmax)
            return;

        // turn on updated pads
        auto pvec  = lookup_pads(n1);
        auto color = lookup_pads(pvec.pads[0]);

        output_pads(pvec, m_pressed, mode, frame, dev_out);
}

    //-------------------------------------------------------------------------------------------------------
    void
    process_note_on(midi_t& mt, midibuffer& dev_out, midibuffer& aux_out)
    //-------------------------------------------------------------------------------------------------------
    {
        note_t
        n0 = mt.data[0]-36,
        note = lookup_note(n0);

        auto pads = lookup_pads(note);
        note += m_octave*12;

        if (contains_note(held_notes, note))
            return;

        mt.data[0] = note;
        aux_out.push(mt);
        active_notes.push_back(note);

        output_pads(pads, m_pressed, 0, mt.frame, dev_out);
    }

    //-------------------------------------------------------------------------------------------------------
    void
    process_note_off(midi_t& mt, midibuffer& dev_out, midibuffer& aux_out)
    //-------------------------------------------------------------------------------------------------------
    {
        note_t
        n0 = mt.data[0]-36,
        note = lookup_note(n0);

        auto color  = lookup_color(n0);
        auto pads   = lookup_pads(note);

        note += m_octave*12;

        // if note is already registered as
        // a 'held note', erase it
        erase_note(held_notes, note);

        if (m_hold) {
             // if select button is pressed, register note as 'held'
            held_notes.push_back(note);
            output_pads(pads, color, PadLightingMode::Pulse2, mt.frame, dev_out);
        }

        if (contains_note(active_notes, note))
            erase_note(active_notes, note);
        else
        {
            // if note is not registered as active, it should be a 'ghost' note
            // meaning a note for which the pad indexes have changed during octave change
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

            assert(rem);
            erase_note(ghost_notes, *rem);
        }

        mt.data[0] = note;
        aux_out.push(mt);
        output_pads(pads, color, 0, mt.frame, dev_out);
    }

    //-------------------------------------------------------------------------------------------------------
    virtual void
    initialize(const Graph::properties &properties) override
    //-------------------------------------------------------------------------------------------------------
    {
        m_async_buffer.allocate(properties.vector*sizeof(sample_t));
    }

    //-------------------------------------------------------------------------------------------------------
    virtual void
    rwrite(pool& inputs, pool& outputs, vector_t nframes) override
    //-------------------------------------------------------------------------------------------------------
    {
        auto dev_in     = inputs.midi[0][0];
        auto aux_in     = inputs.midi[1][0];
        auto dev_out    = outputs.midi[0][0];
        auto aux_out    = outputs.midi[1][0];

        for (auto& mt : *dev_in)
        {
            switch(mt.status & 0xf0)
            {
            // note: channel pressure & program change are not expected
            // to be sent from the device
            case 0x80:
                if (mt.data[0] > 35)
                    // otherwise they are emitted by the knob/ribbon sensors
                    process_note_off(mt, *dev_out, *aux_out);
                break;

            case 0x90:
                if (mt.data[0] > 35)
                    process_note_on(mt, *dev_out, *aux_out);
                break;

            case 0xa0:
            {
                // aftertouch: lookup note and pass-through to output
                // might be interesting to have device feedback
                // but it also might be too much to send back out?
                if(mt.data[1] >= 60) {
                    byte_t value = ((mt.data[1]-60)/67)*127;
                    mt.data[0] = lookup_note(mt.data[0]-36) + m_octave*12;
                    mt.data[1] = value;
                    aux_out->push(mt);
                }

                break;
            }
            case 0xb0:
            {
                // control: modwheel, command buttons, toggles, knobs
                switch(mt.data[0])
                {
                // modwheel: pass through
                case 0:
                    aux_out->push(mt);
                    break;

                case Ableton::Push::CommandButtons::OctaveUp:
                    // update on button release
                    if (mt.data[1] == 0)
                        update_octave(1, mt.frame, *dev_out);
                    break;

                case Ableton::Push::CommandButtons::OctaveDown:
                    if (mt.data[1] == 0)
                        update_octave(-1, mt.frame, *dev_out);
                    break;

                    // knobs TODO
                }

                break;
            }
            case 0xe0:
                // pass through pitchbend
                aux_out->push(mt);
            }
        }

        // push back asynchronous events if there are any
        for (auto& mt : m_async_buffer)
             dev_out->push(mt);

        m_async_buffer.clear();
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
    pitchbend(unsigned int value);

    Q_SIGNAL void
    modwheel(unsigned int value);

    Q_SIGNAL void
    pad(unsigned int index, unsigned int color, unsigned int mode);

    Q_SIGNAL void
    command(unsigned int index, unsigned int value);

    Q_SIGNAL void
    toggle(unsigned int row, unsigned int index, unsigned int value);

    Q_SIGNAL void
    knob(unsigned int index, unsigned int value);

    //-------------------------------------------------------------------------------------------------------
    template<typename T> void
    erase_note(std::vector<T>& v, T note)
    {
        v.erase(std::remove(v.begin(), v.end(), note), v.end());
    }

    //-------------------------------------------------------------------------------------------------------
    template<typename T> bool
    contains_note(std::vector<T>& v, T note)
    {
        return std::find(v.begin(), v.end(), note) != v.end();
    }

    //-------------------------------------------------------------------------------------------------------
    void
    enqueue_basic(byte_t status, byte_t b1, byte_t b2)
    //-------------------------------------------------------------------------------------------------------
    {
        m_async_buffer.reserve(status, 0, b1, b2);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    set_button(unsigned int button, unsigned int mode)
    //-------------------------------------------------------------------------------------------------------
    {
        enqueue_basic(0xb0, button, mode);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    set_pad(unsigned int index, unsigned int color, unsigned int mode)
    //-------------------------------------------------------------------------------------------------------
    {
        enqueue_basic(0xb0+mode, index+36, color);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    set_toggle(unsigned int row, unsigned int index, unsigned int mode)
    //-------------------------------------------------------------------------------------------------------
    {
        enqueue_basic(0xb0, row+index, mode);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    set_touch_bend()
    //-------------------------------------------------------------------------------------------------------
    {
        byte_t ssx[8] = { 0x47, 0x7f, 0x15, 0x63, 0x0, 0x1, 0x5, 0xf7 };
        m_async_buffer.reserve(8, 0xf0, 0, ssx);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    set_touch_wheel()
    //-------------------------------------------------------------------------------------------------------
    {
        byte_t ssx[8] = { 0x47, 0x7f, 0x15, 0x63, 0x0, 0x1, 0x9, 0xf7 };
        m_async_buffer.reserve(8, 0xf0, 0, ssx);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    lcd_clearline(unsigned int index)
    //-------------------------------------------------------------------------------------------------------
    {
        byte_t idx = static_cast<byte_t>(index)+0x1c;
        byte_t ssx[7] = { 0x47, 0x7f, 0x15, idx, 0x0, 0x0, 0xf7 };
        m_async_buffer.reserve(7, 0xf0, 0, ssx);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    lcd_clear()
    //-------------------------------------------------------------------------------------------------------
    {
        for (byte_t n = 0; n < 4; ++n)
             lcd_clearline(n);
    }

    //-------------------------------------------------------------------------------------------------------
    Q_INVOKABLE void
    lcd_display(unsigned int row, unsigned int column, QString text)
    //-------------------------------------------------------------------------------------------------------
    {
        auto b_arr = text.toUtf8();

        byte_t rw = 0x18+row;
        byte_t cl = column;
        byte_t le = b_arr.count()+1;

        byte_t ssx[7] = { 0x47, 0x7f, 0x15, rw, 0x0, le, cl };
        // don't foreget the EOX at the end, we reserve string nbytes+8
        midi_t* mt = m_async_buffer.reserve(8+le);

        mt->status = 0xf0;
        memcpy(mt->data, ssx, 7);
        memcpy(&(mt->data[7]), b_arr.data(), le);
        mt->data[7+le] = 0xf7;
    }
};

}
}


#endif // DEVICE_ENUMS_HPP
