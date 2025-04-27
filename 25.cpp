#include <iostream>
using namespace std;

class Complex {
protected:
    int real, img;

public:
    void getData() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> img;
    }

    void display() {
        cout << real << " + " << img << "i" << endl;
    }
};

class Complex2 : public Complex {
protected:
    int real2, img2;

public:
    void getData2() {
        cout << "Enter second complex number's real and imaginary part: ";
        cin >> real2 >> img2;
    }

    void add() {
        cout << "Sum = " << real + real2 << " + " << img + img2 << "i" << endl;
    }

    friend class Difference;
};

class Difference {
public:
    void diff(Complex2 obj) {
        cout << "Difference = " << obj.real - obj.real2 << " + " << obj.img - obj.img2 << "i" << endl;
    }
};

int main() {
    Complex2 c;
    Difference d;
    c.getData();
    c.getData2();
    c.add();
    d.diff(c);
    return 0;
}
