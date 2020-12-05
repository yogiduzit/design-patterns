//
// Created by Yogesh Verma on 2020-12-05.
//

#include "iostream"
#include "../headers/HighScore.hpp"
#include "../headers/Subject.hpp"

using std::cout;
using std::endl;

void HighScore::update() {
    if (subject == nullptr) {
        return;
    }

    state = subject->get_state();

    switch (state) {
        case State::begin:
            cout << "Load high scores" << endl;
            break;
        case State::end:
            cout << "Save high score" << endl;
            break;
    }
}