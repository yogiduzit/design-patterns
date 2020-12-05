//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once

#include <iostream>
#include "ServiceInterface.hpp"

using std::cout;
using std::endl;

class Service: public ServiceInterface {
public:
    void query_database() override {
        cout << "Querying the database" << endl;
    }
};
