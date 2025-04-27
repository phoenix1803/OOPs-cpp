#include <iostream>
using namespace std;

class StudentClass {
private:
    string name;
public:
    void setName(string n) { name = n; }
    void display() { cout << "Class Name: " << name << endl; }
};

struct StudentStruct {
    string name;
    void display() { cout << "Struct Name: " << name << endl; }
};

int main() {
    StudentClass s1;
    s1.setName("Prakhar");
    s1.display();

    StudentStruct s2;
    s2.name = "Bhumika";
    s2.display();

    return 0;
}
