//
// Created by Yogesh Verma on 2020-12-05.
//

#include "Observer.hpp"
#include "State.hpp"

class Screens: public Observer {
public:
    Screens(State s): Observer(s) {}

    virtual void update();
};
