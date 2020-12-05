#include <iostream>
#include "headers/ServiceInterface.hpp"
#include "headers/Service.hpp"
#include "headers/Proxy.hpp"

void client(ServiceInterface * si);

int main() {
    Service * db = new Service;
    Proxy * proxy = new Proxy {db};

    // No authorization, no optimization
    client(db);

    // Authorization + Optimization
    client(proxy);

    delete db;
    delete proxy;
    return 0;
}

void client(ServiceInterface * si) {
    si->query_database();
}
