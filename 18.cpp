#include <iostream>
using namespace std;

class A {
public:
    A() { cout << "Constructor of A\n"; }
};

class B : public A {
public:
    B() { cout << "Constructor of B\n"; }
};

class C : public B {
public:
    C() { cout << "Constructor of C\n"; }
};

int main() {
    C obj;
    return 0;
}
