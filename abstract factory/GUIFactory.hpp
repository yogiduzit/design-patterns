//
// Created by wuviv on 2020-12-06.
//

#ifndef DESIGN_PATTERNS_GUIFACTORY_HPP
#define DESIGN_PATTERNS_GUIFACTORY_HPP


#include "Button.hpp"
#include "Checkbox.hpp"

class GUIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Checkbox* createCheckbox() = 0;
};

class WinFactory: public GUIFactory{
public:
    Button * createButton() override{return new WinButton;}
    Checkbox * createCheckbox() override{return new WinCheckbox;}
};

class MacFactory: public GUIFactory{
public:
    Button * createButton() override{return new MacButton;}
    Checkbox * createCheckbox() override{return new MacCheckbox;}
};


#endif //DESIGN_PATTERNS_GUIFACTORY_HPP
