//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once

#include "Subject.hpp"

class Game: public Subject {
public:
    Game(State s): Subject(s) {}

    void begin();
    void end();
};
