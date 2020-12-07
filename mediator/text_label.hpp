//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once

#include <iostream>
#include "component.hpp"

class text_label : public component {
private:
    std::string text = "";

public:

    text_label(mediator* mediator):component(mediator){};
    void display_text(std::string prefix) {
        if (!text.empty()) {
            std::cout << prefix << ": " << text << std::endl;
        }
    }
    inline void set_text(std::string prefix){ this->text = prefix;}
};