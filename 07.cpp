#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;
    float marks;

public:
    void getData() {
        cout << "Enter name, roll no, and marks: ";
        cin >> name >> roll >> marks;
    }

    void displayData() {
        cout << "Name: " << name << "\nRoll No: " << roll << "\nMarks: " << marks << endl;
    }
};

int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}
