//
// Created by wuviv on 2020-12-06.
//

#ifndef DESIGN_PATTERNS_BUTTON_HPP
#define DESIGN_PATTERNS_BUTTON_HPP

#include <iostream>

class Button{
public:
    virtual void paint() = 0;
};

class WinButton: public Button{
    void paint() override{ std::cout<<"Windows Button"<<std::endl;}
};

class MacButton: public Button{
    void paint() override{std::cout<<"Mac Button"<<std::endl;}
};
#endif //DESIGN_PATTERNS_BUTTON_HPP
