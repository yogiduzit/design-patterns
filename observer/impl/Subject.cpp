//
// Created by Yogesh Verma on 2020-12-05.
//

#include "../headers/Subject.hpp"

void Subject::attach(Observer *o) {
    o->register_subject(this);
    observers.push_back(o);
}

void Subject::detach(Observer *o) {
    int delete_index = -1;
    for (int i = 0; i < observers.size(); ++i) {
        if (observers[i] == o) {
            delete_index = i;
            break;
        }
    }
    o->subject = nullptr;
    observers.erase(observers.begin() + delete_index);
}

void Subject::notify() {
    for (Observer * o: observers) {
        o->update();
    }
}

Subject::~Subject() = default;