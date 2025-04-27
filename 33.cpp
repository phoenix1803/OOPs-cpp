#include <iostream>
#include <string>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }
    
    float add(float a, float b) {
        return a + b;
    }
    
    int add(int a, int b, int c) {
        return a + b + c;
    }
    
    string add(string a, string b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    
    cout << "Addition of two integers: " << calc.add(5, 10) << endl;
    cout << "Addition of two floats: " << calc.add(2.5f, 3.5f) << endl;
    cout << "Addition of three integers: " << calc.add(1, 2, 3) << endl;
    cout << "Concatenation of two strings: " << calc.add(string("Hello "), string("World")) << endl;

    return 0;
}
