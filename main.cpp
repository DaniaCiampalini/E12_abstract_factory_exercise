#include <iostream>
#include "Window.h"
#include "Button.h"

#include "WidgetFactory.h"
#include "WindowsWidgetFactory.h"
#include "IOSWidgetFactory.h"

// TODO try compiling commenting the next define...
#define _WIN64

int main() {
#ifdef _WIN64
    WidgetFactory* guiFactory;
    guiFactory = new WindowsWidgetFactory(); // Create Windows Factory
#else
    guiFactory = new IOSWidgetFactory(); // Create iOS Factory
#endif

    // Create a "Click" button (object name: button)
    std::unique_ptr<Button> button = guiFactory->createButton("Click");

    // Create a "Game name" window (object name: window)
    std::unique_ptr<Window> window = guiFactory->createWindow("Game name");

    // Draw button and window
    button->draw();
    window->draw();

    // Resize window and set icon on button
    window->resize(1024, 768);
    button->setIcon("icon.ico");

    // Don't forget to delete the factory
    delete guiFactory;

    return 0;
}