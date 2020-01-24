cmake_minimum_required(VERSION 3.0)

find_package(ECM REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})

include(KDEInstallDirs)
include(KDECMakeSettings)
include(KDECompilerSettings)

find_package(KF5 5.0.0 REQUIRED COMPONENTS Plasma KIO)

add_library(plasma_containmentactions_runcommand MODULE runcommand.cpp)
kcoreaddons_desktop_to_json(plasma_containmentactions_runcommand plasma-containmentactions-runcommand.desktop)
target_link_libraries(plasma_containmentactions_runcommand KF5::Plasma KF5::KIOCore KF5::KIOWidgets)

install(TARGETS plasma_containmentactions_runcommand DESTINATION ${KDE_INSTALL_PLUGINDIR}/plasma/containmentactions)
