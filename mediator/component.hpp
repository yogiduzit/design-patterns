//
// Created by Herbert Ma on 2020-12-02.
//

#pragma once


#include "mediator.hpp"

class mediator;

class component{

protected:
    mediator* m;

public:

    component(mediator* mediator) : m(mediator) {}
    inline void set_mediator(mediator* mediator){ this ->m = mediator;}
};