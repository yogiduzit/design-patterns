#include <iostream>

using std::string;
using std::cout;
using std::endl;

struct Color {
    string color;
    virtual string get_color() = 0;
};

struct Red: Color {
    Red() {
        color = "#FF0000";
    }

    string get_color() override {
        return "Red";
    }
};

struct Blue: Color {
    Blue() {
        color = "#0000FF";
    }

    string get_color() override {
        return "Blue";
    }
};

struct Shape {
    Color * my_color;

    Shape(Color * color) {
        my_color = color;
    }

    virtual void draw() {
        cout << "I'm a shape with color: " << my_color->get_color() << endl;
    }

    virtual ~Shape() {
        delete my_color;
    }
};

struct Square: Shape {
    Square(Color * color): Shape(color) {};

    void draw() override {
        cout << "I'm a square with color: " << my_color->get_color() << endl;
    }
};

struct Circle: Shape {
    Circle(Color * color): Shape(color) {};

    void draw() override {
        cout << "I'm a circle with color: " << my_color->get_color() << endl;
    }
};


int main() {
    cout << "-- Red Square, LOL --" << endl;
    Square red_square {new Red{} };
    red_square.draw();

    cout << "-- Blue circle" << endl;
    Circle blue_circle {new Blue{} };
    blue_circle.draw();
}
