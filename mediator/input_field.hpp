//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once

#include <iostream>
#include "component.hpp"

class input_field : public component {
public:

    input_field(mediator *m) : component(m) {};

    void enter_data() {
        std::cout << "Enter text: " << std::endl;
        std::cin >> text;
        this->m->notify(this, text);
    }

    std::string text = "";

};