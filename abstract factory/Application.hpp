//
// Created by wuviv on 2020-12-06.
//

#ifndef BUILDER_APPLICATION_HPP
#define BUILDER_APPLICATION_HPP

#include "GUIFactory.hpp"
#include "Button.hpp"

class Application{
private:
    GUIFactory *factory;
    Button* button;
public:
    Application(GUIFactory* factory): factory(factory){};
    void createUI(){
        this->button = factory->createButton();
    }
    void paint(){
        button->paint();
    }
};
#endif //BUILDER_APPLICATION_HPP
