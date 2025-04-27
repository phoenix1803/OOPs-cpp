#include <iostream>
using namespace std;

class Demo {
    int a;

public:
    Demo() { a = 0; } // Default
    Demo(int x) { a = x; } // Parameterized
    Demo(const Demo &obj) { a = obj.a; } // Copy

    void display() {
        cout << "Value: " << a << endl;
    }
};

int main() {
    Demo d1;          // Default
    Demo d2(10);      // Parameterized
    Demo d3(d2);      // Copy

    d1.display();
    d2.display();
    d3.display();

    return 0;
}
