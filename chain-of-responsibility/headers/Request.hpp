//
// Created by Yogesh Verma on 2020-12-07.
//

#include <string>

using namespace std;

class Request {
private:
    bool is_authenticated;
    bool is_authorized;
public:
    Request(bool authenticated, bool authorized): is_authenticated(authenticated), is_authorized(authorized) {}
    bool isAuthenticated() const {
        return is_authenticated;
    }

    bool isAuthorized() const {
        return is_authorized;
    }
};
