#include <iostream>
using namespace std;

class Complex {
private:
    float real, imag;

public:
    void getData() {
        cout << "Enter real and imaginary parts: ";
        cin >> real >> imag;
    }

    void add(Complex c1, Complex c2) {
        real = c1.real + c2.real;
        imag = c1.imag + c2.imag;
    }

    void display() {
        cout << "Sum = " << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1, c2, c3;
    c1.getData();
    c2.getData();
    c3.add(c1, c2);
    c3.display();
    return 0;
}
