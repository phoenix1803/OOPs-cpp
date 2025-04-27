#include <iostream>
using namespace std;

class Shape {
public:
    int height;
    Shape(int h) { height = h; }
};

class Rectangle {
public:
    int length, breadth;
    Rectangle(int l, int b) { length = l; breadth = b; }
};

class Cuboid : public Shape, public Rectangle {
public:
    Cuboid(int l, int b, int h) : Rectangle(l, b), Shape(h) {}

    int volume() {
        return length * breadth * height;
    }
};

int main() {
    Cuboid c(2, 3, 4);
    cout << "Volume of Cuboid: " << c.volume() << endl;
    return 0;
}
