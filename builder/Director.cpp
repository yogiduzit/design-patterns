//
// Created by Herbert Ma on 2020-12-05.
//


#include "Director.hpp"

Director::Director(Builder *b) {
    this->builder = b;
}

void Director::set_builder(Builder *builder) {
    this->builder = builder;
}

void Director::build_basic() {
    this->builder->AddEngine("Basic Engine");
    this->builder->AddColor("Black");
    this->builder->AddWheels("Four wheels");
    this->builder->AddGear("Automatic");
}


