//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once

#include <iostream>
#include "component.hpp"

class button : public component {

public:
    button(mediator* m): component(m){};
    void on_click() {
        std::cout << "Button was clicked" << std::endl;
        this->m->notify(this, "");
    }
};