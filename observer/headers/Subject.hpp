//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once

#include "vector"
#include "State.hpp"
#include "Observer.hpp"

using std::vector;

class Subject {
public:
    vector<Observer *> observers;

    Subject(State s): state{s} {}

    void attach(Observer *o);
    void detach(Observer *o);
    void notify();

    inline void set_state(State g) {
        state = g;
        notify();
    }

    inline State get_state() {
        return state;
    }

    virtual ~Subject() = 0;

protected:
    State state;
};
