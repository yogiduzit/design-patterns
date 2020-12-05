#include <iostream>
#include "Decorator.hpp"
#include "Component.hpp"

using namespace std;

int main() {

    // Create a plain wheat donut
    Component* donut = new WheatDonut();
    cout << donut->description() << " Cost: " << donut->getCost() << endl;

    // Create a new plain Rice donut
    Component* rice_donut = new RiceDonut();


    // Decorate it with sprinkles toppings
    rice_donut = new Sprinkles(rice_donut);

    // Decorate it with gummies toppings
    rice_donut = new Gummies(rice_donut);

    // Decorate it with gummies toppings
    rice_donut = new Chocolate(rice_donut);

    // Our rice donut with all the toppings
    cout << rice_donut->description() << " Cost: " << rice_donut->getCost() << endl;
    return 0;
}
