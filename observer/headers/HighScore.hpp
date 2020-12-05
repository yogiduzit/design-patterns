//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once


#include "Observer.hpp"
#include "State.hpp"

class HighScore: public Observer {
public:
    HighScore(State s): Observer(s) {}

    virtual void update();
};