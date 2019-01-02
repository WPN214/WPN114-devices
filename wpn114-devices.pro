TARGET = WPN114-devices
TEMPLATE = lib
CONFIG += c++11 dll
QT += quick

localmod: DESTDIR = $$QML_MODULE_DESTDIR/WPN114/Devices
else {
    DESTDIR = $$[QT_INSTALL_QML]/WPN114/Devices
    QML_MODULE_DESTDIR = $$[QT_INSTALL_QML]
}

QMLDIR_FILES += $$PWD/qml/qmldir
QMLDIR_FILES += $$PWD/qml/devices.qmltypes
QMLDIR_FILES += $$PWD/qml/PushDevice.qml
OTHER_FILES = $$QMLDIR_FILES

for(FILE,QMLDIR_FILES) {
    QMAKE_POST_LINK += $$quote(cp $${FILE} $${DESTDIR}$$escape_expand(\n\t))
}

HEADERS += $$PWD/source/device_enums.hpp
SOURCES += $$PWD/qml_plugin.cpp
HEADERS += $$PWD/qml_plugin.hpp
