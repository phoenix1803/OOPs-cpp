#include <iostream>
using namespace std;

class Shape {
protected:
    int height;

public:
    Shape(int h) { height = h; }
};

class Rectangle {
protected:
    int length, breadth;

public:
    Rectangle(int l, int b) { length = l; breadth = b; }
};

class Cuboid : public Shape, public Rectangle {
public:
    Cuboid(int l, int b, int h) : Rectangle(l, b), Shape(h) {}

    int area() { return length * breadth; }
    int volume() { return length * breadth * height; }
};

int main() {
    Cuboid c(2, 3, 4);
    cout << "Area: " << c.area() << endl;
    cout << "Volume: " << c.volume() << endl;
    return 0;
}
