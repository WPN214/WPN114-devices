cmake_minimum_required(VERSION 3.1)
project(wpn114devices-qml LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_LINK_FLAGS)

find_package(Qt5 REQUIRED COMPONENTS Quick Core Qml)

set(WPN114DEVICES_QML_SOURCES
    qml_plugin.cpp
    source/devices.hpp
    source/devices.cpp
    qml/PushDevice.qml
    )

if (UNIX AND NOT APPLE)
    set(QT5_WPN114QML_PATH /usr/lib/qt/qml/WPN114)
endif()

add_library(${PROJECT_NAME} SHARED ${WPN114DEVICES_QML_SOURCES})
target_link_libraries(${PROJECT_NAME} Qt5::Core Qt5::Quick Qt5::Qml -L${QT5_WPN114QML_PATH}/Midi/libwpn114midi-qml.so)
target_include_directories(${PROJECT_NAME} PUBLIC ${QT5_WPN114QML_PATH}/Midi/include)

install(TARGETS ${PROJECT_NAME} DESTINATION ${QT5_WPN114QML_PATH}/Devices)
install(FILES qml/devices.qmltypes qml/qmldir qml/PushDevice.qml
        DESTINATION ${QT5_WPN114QML_PATH}/Devices)
