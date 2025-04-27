#include <iostream>
using namespace std;

void show(int a) {
    cout << "Integer: " << a << endl;
}

void show(double b) {
    cout << "Double: " << b << endl;
}

void show(string s, int times) {
    for (int i = 0; i < times; i++)
        cout << s << " ";
    cout << endl;
}

int main() {
    show(5);
    show(3.14);
    show("Hello", 3);
    return 0;
}
