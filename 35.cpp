#include <iostream>
using namespace std;

class ComplexNumber {
    float real;
    float imag;

public:
    ComplexNumber() : real(0), imag(0) {}
    
    ComplexNumber operator+(ComplexNumber c) {
        ComplexNumber temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    bool operator==(ComplexNumber c) {
        return (real == c.real && imag == c.imag);
    }

    friend ostream& operator<<(ostream &out, ComplexNumber &c);
    friend istream& operator>>(istream &in, ComplexNumber &c);
};

ostream& operator<<(ostream &out, ComplexNumber &c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator>>(istream &in, ComplexNumber &c) {
    cout << "Enter real part: ";
    in >> c.real;
    cout << "Enter imaginary part: ";
    in >> c.imag;
    return in;
}

int main() {
    ComplexNumber c1, c2, sum;

    cout << "Enter first complex number:\n";
    cin >> c1;
    cout << "Enter second complex number:\n";
    cin >> c2;

    sum = c1 + c2;

    cout << "First Complex Number: " << c1 << endl;
    cout << "Second Complex Number: " << c2 << endl;
    cout << "Sum: " << sum << endl;

    if (c1 == c2)
        cout << "Both complex numbers are equal.\n";
    else
        cout << "Complex numbers are not equal.\n";

    return 0;
}
