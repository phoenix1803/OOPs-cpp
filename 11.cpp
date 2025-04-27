#include <iostream>
using namespace std;

class Box {
    int length;

public:
    Box() { length = 10; }

    friend void printLength(Box b);
};

void printLength(Box b) {
    cout << "Length is: " << b.length << endl;
}

int main() {
    Box b1;
    printLength(b1);
    return 0;
}
