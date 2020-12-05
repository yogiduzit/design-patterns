//
// Created by Yogesh Verma on 2020-12-05.
//

#include "iostream"
#include "../headers/Subject.hpp"
#include "../headers/Screens.hpp"

using std::cout;
using std::endl;

void Screens::update() {
    if (subject == nullptr) {
        return;
    }

    state = subject->get_state();

    switch (state) {
        case State::begin:
            cout << "Show start screen" << endl;
            break;
        case State::end:
            cout << "Show game over screen" << endl;
            break;
    }
}