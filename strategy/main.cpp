#include <iostream>
#include "headers/Character.hpp"

int main() {
    Character *character = new Character;
    character->change_weapon(new Sword);
    character->attack();

    std::cout << "\n";

    character->change_weapon(new Spear);
    character->attack();
    delete character;
}
