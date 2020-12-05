//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once

#include "Component.hpp"

class Decorator: public Component{

protected:
    Component* base;
    int cost;
public:
    string description() override;
    int getCost() override;

};


class Sprinkles: public Decorator{
public:
    Sprinkles(Component* base);
};


class Gummies: public Decorator{
public:
    Gummies(Component* base);
};

class Chocolate: public Decorator{
public:
    Chocolate(Component* base);
};