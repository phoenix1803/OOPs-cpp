#include <iostream>
using namespace std;

class Employee {
public:
    void getDetails() {
        cout << "Employee details\n";
    }
};

class Person {
public:
    void getDetails() {
        cout << "Person details\n";
    }
};

class Manager : public Employee, public Person {
public:
    Manager() {
        cout << "Manager created\n";
    }

    void show() {
        Employee::getDetails();
        Person::getDetails();
    }
};

int main() {
    Manager m;
    m.show();
    return 0;
}
