//
// Created by Herbert Ma on 2020-12-05.
//

#include "SimpleCarBuilder.hpp"

void SimpleCarBuilder::AddEngine(string engine) const {
    this->car->engine = engine;
}

void SimpleCarBuilder::AddGear(string gear) const {
    this->car->gear = gear;
}

void SimpleCarBuilder::AddWheels(string wheels) const {
    this->car->wheels = wheels;
}

void SimpleCarBuilder::AddColor(string color) const {
    this->car->color = color;
}

void SimpleCarBuilder::reset() {
    this->car = new Car();
}

SimpleCarBuilder::~SimpleCarBuilder() {
    delete this->car;
}

Car *SimpleCarBuilder::getProduct() {
    Car* result = this->car;
    this->reset();
    return result;
}

SimpleCarBuilder::SimpleCarBuilder() {
    reset();
}
