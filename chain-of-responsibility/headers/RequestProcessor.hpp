//
// Created by Yogesh Verma on 2020-12-07.
//

#pragma once

#include "handlers.hpp"

class RequestProcessor {
private:
    AuthenticationHandler * authenticationHandler;
    AuthorizationHandler * authorizationHandler;
public:
    RequestProcessor() {
        authenticationHandler = new AuthenticationHandler;
        authorizationHandler = new AuthorizationHandler;

        authenticationHandler->set_handler(authorizationHandler);
    }

    bool process_request(Request * request) {
        pair<string, bool> result = authenticationHandler->handle_request(request);

        if (result.second == true) {
            cout << "Request processed successfully" << endl;
            return true;
        } else {
            cout << "Request could not be processed. Error in " << result.first << endl;
            return false;
        }
    }

    ~RequestProcessor() {
        delete authenticationHandler;
        delete authorizationHandler;
    }
};
