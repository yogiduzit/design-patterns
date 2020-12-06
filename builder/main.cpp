#include <iostream>
#include "Director.hpp"
#include "SimpleCarBuilder.hpp"

int main() {

    SimpleCarBuilder* builder = new SimpleCarBuilder();
    Director* director = new Director(builder);
    Car* car = nullptr;
    director->build_basic();
    car = builder->getProduct();

    cout << *car << endl;
    delete builder;
    delete director;
    return 0;
}
