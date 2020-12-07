//
// Created by Yogesh Verma on 2020-12-07.
//

#include <string>
#include <iostream>

using namespace std;

class Weapon {
public:
    string name;
    virtual void attack() = 0;
    virtual ~Weapon() {};
};

class Sword: public Weapon {
public:
    Sword() {
        name = "Sword";
    }

    void attack() override {
        cout << "Attacked with " << name << endl;
    }
};

class Spear: public Weapon {
public:
    Spear() {
        name = "Spear";
    }

    void attack() override {
        cout << "Attacked with " << name << endl;
    }
};