//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once
#include <string>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class Car{

public:

    string wheels;
    string gear;
    string engine;
    string color;
    vector<string> features;
    Car() = default;
    friend ostream& operator<<(ostream&os, const Car& c);
};

