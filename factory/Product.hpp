//
// Created by wuviv on 2020-12-07.
//

#ifndef FACTORY_PRODUCT_HPP
#define FACTORY_PRODUCT_HPP

#include <string>

class Product {
public:
    virtual ~Product() {}
    virtual std::string Operation() const = 0;
};

class ConcreteProduct1 : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct1}";
    }
};
class ConcreteProduct2 : public Product {
public:
    std::string Operation() const override {
        return "{Result of the ConcreteProduct2}";
    }
};

#endif //FACTORY_PRODUCT_HPP
