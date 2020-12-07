//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once


#include <string>
#include "component.hpp"

class component;

class mediator {

public:
    virtual void notify(component *sender, std::string text) = 0;

private:

};