#include <iostream>
using namespace std;

class Person {
public:
    string name;
    void getPerson() {
        cout << "Enter name: ";
        cin >> name;
    }

    void showPerson() {
        cout << "Name: " << name << endl;
    }
};

class Employee : virtual public Person {};
class Student : virtual public Person {};

class Intern : public Employee, public Student {};

int main() {
    Intern i;
    i.getPerson();
    i.showPerson();
    return 0;
}
