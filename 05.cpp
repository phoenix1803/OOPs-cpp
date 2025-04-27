#include <iostream>
using namespace std;

inline int multiply(int a, int b) {
    return a * b;
}

int sum(int a, int b = 10) {
    return a + b;
}

void showMessage(const string &msg) {
    cout << "Message: " << msg << endl;
}

int main() {
    cout << "Multiplication (3 * 4): " << multiply(3, 4) << endl;
    cout << "Sum with default argument (5 + default): " << sum(5) << endl;
    showMessage("Welcome to C++ Lab");
    return 0;
}
