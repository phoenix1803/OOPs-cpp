#include <iostream>
using namespace std;

class Person {
public:
    string name;

    void getName() {
        cout << "Enter name: ";
        cin >> name;
    }
};

class Student : public Person {
public:
    void display() {
        cout << "Name is: " << name << endl;
    }
};

int main() {
    Student s;
    s.getName();
    s.display();
    return 0;
}
