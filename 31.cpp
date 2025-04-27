#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor\n"; }
    ~Base() { cout << "Base Destructor\n"; }
};

class Intermediate : public Base {
public:
    Intermediate() { cout << "Intermediate Constructor\n"; }
    ~Intermediate() { cout << "Intermediate Destructor\n"; }
};

class Derived : public Intermediate {
public:
    Derived() { cout << "Derived Constructor\n"; }
    ~Derived() { cout << "Derived Destructor\n"; }
};

int main() {
    Derived d;
    return 0;
}
