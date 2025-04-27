#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T num1, num2;
public:
    Calculator(T a, T b) {
        num1 = a;
        num2 = b;
    }
    void add() { cout << "Addition: " << num1 + num2 << endl; }
    void subtract() { cout << "Subtraction: " << num1 - num2 << endl; }
    void multiply() { cout << "Multiplication: " << num1 * num2 << endl; }
    void divide() { 
        if (num2 != 0)
            cout << "Division: " << num1 / num2 << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    Calculator<int> calc1(10, 5);
    calc1.add();
    calc1.subtract();
    calc1.multiply();
    calc1.divide();

    Calculator<double> calc2(5.5, 2.2);
    calc2.add();
    calc2.subtract();
    calc2.multiply();
    calc2.divide();

    return 0;
}
