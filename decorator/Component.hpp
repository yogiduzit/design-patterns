//
// Created by Herbert Ma on 2020-12-05.
//

#pragma once
#include <string>

using std::string;

class Component{

public:
    virtual string description(){
        return name;
    }
    virtual int getCost() = 0;
protected:
    string name = "Unknown";
};

class WheatDonut: public Component {

public:

    WheatDonut();
    int getCost() override { return 200; };
};


class RiceDonut: public Component {

public:

    RiceDonut();
    int getCost() override { return 300; };
};


