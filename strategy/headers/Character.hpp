//
// Created by Yogesh Verma on 2020-12-07.
//

#pragma once

#include "weapons.hpp"

class Character {
private:
    Weapon *strategy;
public:
    Character(Weapon * strategy = nullptr): strategy(strategy) {
        cout << "Character created" << endl;
    }

    ~Character() {
        delete strategy;
        cout << "Character destructed" << endl;
    }

    void change_weapon(Weapon * strategy) {
        if(this->strategy != nullptr) {
            cout << "Changing weapon from " << this->strategy->name << " to " << strategy->name << endl;
        } else {
            cout << "Changing weapon to " << strategy->name << endl;
        }
        delete this->strategy;
        this->strategy = strategy;
    }

    void attack() {
        strategy->attack();
    }

};