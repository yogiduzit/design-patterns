#include <iostream>
#include "headers/RequestProcessor.hpp"

int main() {
    Request req1 {true, true};
    Request req2 {false, false};
    RequestProcessor requestProcessor;

    cout << "Processing request 1" << endl;
    requestProcessor.process_request(&req1);

    cout << endl;
    cout << "Processing request 2" << endl;
    requestProcessor.process_request(&req2);
}
