//
// Created by Yogesh Verma on 2020-12-07.
//

#pragma once

#include "iostream"
#include "Request.hpp"

class BaseHandler {
protected:
    BaseHandler * next_handler = nullptr;
public:
    BaseHandler() = default;
    BaseHandler(BaseHandler * handler): next_handler(handler) {}
    ~BaseHandler() = default;

    virtual pair<string, bool> handle_request(Request * request) = 0;

    void set_handler(BaseHandler * handler) { next_handler = handler; }
};

class AuthenticationHandler: public BaseHandler {
public:
    AuthenticationHandler() = default;
    ~AuthenticationHandler() = default;

    pair<string, bool> handle_request(Request *request) override {
        cout << "Performing authentication" << endl;
        if (request->isAuthenticated()) {
            if (next_handler) {
                return next_handler->handle_request(request);
            }
            return make_pair("", true);
        } else {
            return make_pair("Authentication", false);
        }
    }
};

class AuthorizationHandler: public BaseHandler {
public:
    AuthorizationHandler() = default;
    ~AuthorizationHandler() = default;

    pair<string, bool> handle_request(Request *request) override {
        cout << "Performing authorization" << endl;
        if (request->isAuthorized()) {
            if (next_handler) {
                return next_handler->handle_request(request);
            }
            return make_pair("", true);
        } else {
            return make_pair("Authorization", false);
        }
    }
};