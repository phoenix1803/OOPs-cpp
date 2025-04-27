#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing Shape\n";
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle\n";
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle\n";
    }
};

class Triangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Triangle\n";
    }
};

int main() {
    Shape* s;
    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->draw();

    s = &r;
    s->draw();

    s = &t;
    s->draw();

    return 0;
}
