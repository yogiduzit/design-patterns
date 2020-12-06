//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once

#include "Car.hpp"
#include "Builder.hpp"

class SimpleCarBuilder: public Builder{
private:
    Car* car;

public:
    ~SimpleCarBuilder() override;
    void AddEngine(string engine) const override;
    void AddGear(string gear) const override;
    void AddWheels(string wheels) const override;
    void AddColor(string color) const override;
    void reset();
    Car* getProduct();
    SimpleCarBuilder();
};

