//
// Created by Herbert Ma on 2020-12-02.
//

#include "login_mediator.hpp"

void login_mediator::notify(component *sender, std::string event) {

    if (sender == user_inputfield) {
        if (event != "") {
            if (credentials_db.count(event) <= 0) {
                status_text->set_text("user does not exist");
            } else {
                status_text->set_text("user exists");
            }
        }
    } else if (sender == pass_inputfield) {
        if (event != "") {
            status_text->set_text("password entered");
        }

    } else if (sender == exit_btn) {
        exit_screen = true;
    } else if (sender == login_btn) {
        bool success = (credentials_db.count(user_inputfield->text) > 0 &&
                        (credentials_db[user_inputfield->text] == pass_inputfield->text));
        if (success) {
            cout << "You logged in!" << endl;
            exit_screen = true;
        } else {
            status_text->set_text("Login failed");
        }
    }
}

login_mediator::login_mediator() {

    status_text = new text_label(this);
    credentials_db["bobrules@gmail.com"] = "supersecurepassword123";
    credentials_db["zorak_the_destroyer@hotmail.com"] = "i_am_133t";

    login_btn = new button(this);
    exit_btn = new button(this);

    user_inputfield = new input_field(this);
    pass_inputfield = new input_field(this);
}

void login_mediator::execute() {
    while (!exit_screen) {
        cout << "Welcome!" << endl;
        cout << "Login Screen" << endl;
        cout << "-------------------------------" << endl;
        status_text->display_text("Status");
        cout << "Username: " << user_inputfield->text << endl;
        string password;
        for (int i = 0; i < pass_inputfield->text.size(); i++) {
            password += "*";
        }
        cout << "Password: " << password << endl;
        cout << endl;
        cout << "--------------\t\t-------------" << endl;
        cout << "|Login Button|\t\t|Exit Button|" << endl;
        cout << "--------------\t\t-------------" << endl;
        cout << "What do you want to do?" << endl;
        cout << "1 - Enter username" << endl;
        cout << "2 - Enter password" << endl;
        cout << "3 - Press login button" << endl;
        cout << "4 - Press exit button" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1:
                user_inputfield->enter_data(); //Calling component
                break;
            case 2:
                pass_inputfield->enter_data(); //Calling component
                break;
            case 3:
                login_btn->on_click(); //Calling component
                break;
            case 4:
                exit_btn->on_click(); //Calling component
                break;
            default:
                throw std::invalid_argument("Unable to parse option selected");
        }
    }
}

login_mediator::~login_mediator() {
    delete login_btn;
    delete exit_btn;
    delete user_inputfield;
    delete pass_inputfield;
    delete status_text;
}