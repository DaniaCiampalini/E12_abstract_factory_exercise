

#ifndef E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSWIDGETFACTORY_H
#define E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSWIDGETFACTORY_H

#include "WidgetFactory.h"

class WindowsWidgetFactory : public WidgetFactory {
public:
    std::unique_ptr<Button> createButton(const std::string &text) override {
        return std::unique_ptr<Button>(new WindowsButton(text));
    }

    std::unique_ptr<Window> createWindow(const std::string &title) override {
        return std::unique_ptr<Window>(new WindowsWindow(title));
    }


};


#endif //E12_ABSTRACT_FACTORY_EXERCISE_WINDOWSWIDGETFACTORY_H
