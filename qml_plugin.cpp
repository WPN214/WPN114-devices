#include "qml_plugin.hpp"

#include <source/device_enums.hpp>
#include <QQmlEngine>
#include <qqml.h>

void qml_plugin::registerTypes(const char *uri)
{
    Q_UNUSED ( uri );

     qmlRegisterUncreatableType<CommandButtons, 1>       ( "WPN114.Devices", 1, 0, "CommandButtons", "Coucou" );
     qmlRegisterUncreatableType<ToggleLightingMode, 1>   ( "WPN114.Devices", 1, 0, "ToggleLightingMode", "Coucou" );
     qmlRegisterUncreatableType<ButtonLightingMode, 1>   ( "WPN114.Devices", 1, 0, "ButtonLightingMode", "Coucou" );
     qmlRegisterUncreatableType<ToggleContext, 1>        ( "WPN114.Devices", 1, 0, "ToggleContext", "Coucou" );
     qmlRegisterUncreatableType<PadLightingMode, 1>      ( "WPN114.Devices", 1, 0, "PadLightingMode", "Coucou" );
     qmlRegisterUncreatableType<PadColor, 1>             ( "WPN114.Devices", 1, 0, "PadColor", "Coucou" );
     qmlRegisterUncreatableType<ToggleRow, 1>            ( "WPN114.Devices", 1, 0, "ToggleRow", "Coucou" );
}
