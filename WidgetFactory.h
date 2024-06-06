#ifndef ABSTRACT_FACTORY_WIDGETFACTORY_H
#define ABSTRACT_FACTORY_WIDGETFACTORY_H

#include "Button.h"
#include "Window.h"
#include <string>

class WidgetFactory {
public:
    //create two methods to instantiate button and Window widgets
    virtual std::unique_ptr<Button> createButton(const std::string& text) = 0;
    virtual std::unique_ptr<Window> createWindow(const std::string& title) = 0;

    //make the class abstract by adding a pure virtual destructor
    virtual ~WidgetFactory() {}
};

#endif //ABSTRACT_FACTORY_WIDGETFACTORY_H
