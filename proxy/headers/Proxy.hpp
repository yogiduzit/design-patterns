//
// Created by Yogesh Verma on 2020-12-05.
//

#pragma once

#include "ServiceInterface.hpp"
#include "Service.hpp"

class Proxy: public ServiceInterface {
private:
    Service * service;

public:
    Proxy(Service * s): service(s) {}

    void query_database() override {
        cout << "Authorizing client" << endl;
        cout << "Validating cache" << endl;
        service->query_database();
        cout << "Updating cache" << endl;
    }
};
