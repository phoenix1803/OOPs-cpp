#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Pure virtual
};

class Circle : public Shape {
    int r;
public:
    Circle(int radius) { r = radius; }
    void area() {
        cout << "Area of Circle: " << 3.14 * r * r << endl;
    }
};

int main() {
    Shape* s;
    Circle c(5);
    s = &c;
    s->area();
    return 0;
}
