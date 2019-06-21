#include "qml_plugin.hpp"

#include <source/ableton-push-1/push1.hpp>
#include <QQmlEngine>
#include <qqml.h>

void qml_plugin::registerTypes(const char *uri)
{
    Q_UNUSED (uri)

    qmlRegisterUncreatableType<Ableton::Push::CommandButtons, 1>
    ("WPN114.Devices", 1, 1, "CommandButtons", "Coucou");

    qmlRegisterUncreatableType<Ableton::Push::ToggleLightingMode, 1>
    ("WPN114.Devices", 1, 1, "ToggleLightingMode", "Coucou");

    qmlRegisterUncreatableType<Ableton::Push::ButtonLightingMode, 1>
    ("WPN114.Devices", 1, 1, "ButtonLightingMode", "Coucou");

    qmlRegisterUncreatableType<Ableton::Push::PadLightingMode, 1>
    ("WPN114.Devices", 1, 1, "PadLightingMode", "Coucou");

    qmlRegisterUncreatableType<Ableton::Push::PadColor, 1>
    ("WPN114.Devices", 1, 1, "PadColor", "Coucou" );

    qmlRegisterUncreatableType<Ableton::Push::ToggleRow, 1>
    ("WPN114.Devices", 1, 1, "ToggleRow", "Coucou" );

    qmlRegisterType<Ableton::Push::ChromaticModel, 1>
    ("WPN114.Devices", 1, 1, "PushChromaticModel");
}
