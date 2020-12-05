//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once

#include "State.hpp"

class Subject;

class Observer {
public:
    State state;
    Subject * subject;

    Observer(State s): state(s) {}

    inline void register_subject(Subject * sub) { subject = sub; }

    virtual void update() = 0;
};
