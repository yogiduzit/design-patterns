//
// Created by Yogesh Verma on 2020-12-04.
//

#pragma once

/**
 * Represents the singleton object
 */
class Singleton {
public:
    /**
     * Public static accessor for the singleton instance
     * @return reference to the singleton instance
     */
    static Singleton& get_instance() {
        static Singleton instance;
        return instance;
    }

private:
    /**
     * Represents the data stored in singleton
     */
    int value;

    /**
     * Private constructor prevents external initialization
     */
    Singleton() = default;
public:
    /**
     * Deleted copy constructor prevents instance copying
     */
    Singleton(Singleton const&) = delete;

    /**
     * Deleted assignment operator prevents creation of new instances through assignment
     */
    void operator=(Singleton const&) = delete;

    /**
     * Represents a getter function for data stored in the
     * singleton
     * @return data stored in singleton
     */
    int get_value() {
        return value++;
    }
};
