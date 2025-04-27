#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape\n";
    }
};

class Circle : public Shape {
public:
    void area() override {
        cout << "Area of Circle: pi*r*r\n";
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle: length x breadth\n";
    }
};

class Triangle : public Shape {
public:
    void area() override {
        cout << "Area of Triangle: (1/2) x base x height\n";
    }
};

int main() {
    Shape* s;
    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    return 0;
}
