//
// Created by wuviv on 2020-12-06.
//

#ifndef DESIGN_PATTERNS_CHECKBOX_HPP
#define DESIGN_PATTERNS_CHECKBOX_HPP

#include <iostream>

class Checkbox{
public:
    virtual void paint() = 0;
};

class WinCheckbox: public Checkbox{
public:
    void paint() override{std::cout<<"Windows Checkbox"<<std::endl;}
};

class MacCheckbox: public Checkbox{
public:
    void paint() override{std::cout<<"Mac Checkbox"<<std::endl;}
};
#endif //DESIGN_PATTERNS_CHECKBOX_HPP
