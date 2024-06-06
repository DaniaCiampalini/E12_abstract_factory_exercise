cmake_minimum_required(VERSION 3.3)
project(E12_abstract_factory_exercise)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Widget.h Button.h Window.h WindowsButton.cpp WindowsButton.h WindowsWindow.cpp WindowsWindow.h iOSButton.cpp iOSButton.h iOSWindow.cpp iOSWindow.h WidgetFactory.h
        WindowsWidgetFactory.h
        WindowsWidgetFactory.cpp
        IOSWidgetFactory.h)
add_executable(E12_abstract_factory_exercise ${SOURCE_FILES})