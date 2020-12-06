//
// Created by Herbert Ma on 2020-12-05.
//

#include "Car.hpp"

ostream &operator<<(ostream &os, const Car &c) {
    stringstream features;

    os << "Your brand new car... ";
    for(auto it = c.features.begin(); it != c.features.end(); ++it){
        features << *it << ", ";
    }
    os << c.wheels << ", ";
    os << c.gear << ", ";
    os << c.engine << ", ";
    os << c.color << ", ";
    os << features.str();
    os << "\n";
    return os;
}


