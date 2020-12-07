//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once

#include "mediator.hpp"
#include "button.hpp"
#include "input_field.hpp"
#include "text_label.hpp"
#include <string>
#include <map>

using namespace std;

class login_mediator : public mediator {

private:
    button *login_btn;
    button *exit_btn;
    input_field *user_inputfield;
    input_field *pass_inputfield;

    text_label *status_text;
    bool exit_screen = false;

    std::map<string, string> credentials_db; // lol

public:
    login_mediator();
    void execute();
    void notify(component *sender, string text) override;
    ~login_mediator();
};