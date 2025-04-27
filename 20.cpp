#include <iostream>
using namespace std;

class A {
public:
    int val;
};

class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {
public:
    void setVal(int x) { val = x; }
    void showVal() { cout << "Value: " << val << endl; }
};

int main() {
    D obj;
    obj.setVal(10);
    obj.showVal();
    return 0;
}
