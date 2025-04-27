#include <iostream>
using namespace std;

class Number {
    int value;

public:
    Number() { value = 0; }

    void operator++() {
        value++;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n;
    ++n;
    n.display();
    return 0;
}
