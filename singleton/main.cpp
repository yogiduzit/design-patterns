#include <iostream>
#include "headers/singleton.hpp"

using std::cout;
using std::endl;

int main() {
//    Singleton s1; Constructor has been marked private, so, this doesn't work
//    Singleton s2 = Singleton::get_instance(); Copy constructor has been delete, so, this doesn;t work either

    cout << Singleton::get_instance().get_value() << endl;

    Singleton *sptr = &Singleton::get_instance();
    cout << sptr->get_value() << endl;

    Singleton& sref = Singleton::get_instance();
    cout << sref.get_value() << endl;
}
