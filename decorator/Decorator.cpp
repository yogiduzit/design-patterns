//
// Created by Herbert Ma on 2020-12-05.
//

#include "Decorator.hpp"

Sprinkles::Sprinkles(Component* base) {
    this->name = "Sprinkles";
    this->base = base;
    this->cost = 100;
}


Gummies::Gummies(Component* base) {
    this->name = "Gummies";
    this->base = base;
    this->cost = 50;

}

Chocolate::Chocolate(Component *base) {
    this->name = "Chocolate";
    this->base = base;
    this->cost = 80;
}


string Decorator::description() {
    return base->description() + ", " + name;
}

int Decorator::getCost() {
    return this->cost + base->getCost();
}
