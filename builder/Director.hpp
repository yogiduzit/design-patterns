//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once


#include "Builder.hpp"

class Director {
private:
    Builder* builder;

public:

    Director(Builder* b);
    void set_builder(Builder* builder);
    void build_basic();

};

