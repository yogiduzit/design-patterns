//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once
#include <string>
#include "Car.hpp"

using std::string;

class Builder{

public:
    virtual ~Builder() = default;
    virtual void AddEngine(string engine) const = 0;
    virtual void AddGear(string gear) const = 0;
    virtual void AddWheels(string wheels) const = 0;
    virtual void AddColor(string color) const = 0;
};
