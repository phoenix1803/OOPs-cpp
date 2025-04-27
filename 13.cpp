#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex() {}
    Complex(float r, float i) {
        real = r;
        imag = i;
    }

    friend Complex operator+(Complex c1, Complex c2);
    friend Complex operator-(Complex c1, Complex c2);

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

Complex operator-(Complex c1, Complex c2) {
    return Complex(c1.real - c2.real, c1.imag - c2.imag);
}

int main() {
    Complex a(5, 4), b(2, 3);
    Complex c = a + b;
    Complex d = a - b;

    cout << "Addition: ";
    c.display();

    cout << "Subtraction: ";
    d.display();

    return 0;
}
