#ifndef E12_ABSTRACT_FACTORY_EXERCISE_IOSWIDGETFACTORY_H
#define E12_ABSTRACT_FACTORY_EXERCISE_IOSWIDGETFACTORY_H

#include "WidgetFactory.h"

class IOSWidgetFactory : public WidgetFactory {
public:
    std::unique_ptr<Button> createButton(const std::string &text) override {
        return std::unique_ptr<Button>(new IOSButton(text));
    }

    std::unique_ptr<Window> createWindow(const std::string &title) override {
        return std::unique_ptr<Window>(new IOSWindow(title));
    }
};

#endif //E12_ABSTRACT_FACTORY_EXERCISE_IOSWIDGETFACTORY_H