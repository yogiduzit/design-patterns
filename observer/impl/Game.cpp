//
// Created by Yogesh Verma on 2020-12-05.
//

#include "iostream"
#include "../headers/Game.hpp"

using std::endl;
using std::cout;

void Game::begin() {
    cout << "Start game" << endl;
    set_state(State::begin);
}

void Game::end() {
    cout << "End game" << endl;
    set_state(State::end);
}
