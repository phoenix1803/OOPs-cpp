#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;

public:
    Student(string n, int r) : name(n), roll(r) {}
};

class Marks : public Student {
protected:
    int m1, m2, m3;

public:
    Marks(string n, int r, int a, int b, int c) : Student(n, r), m1(a), m2(b), m3(c) {}
};

class Result : public Marks {
    int total;
    float average;

public:
    Result(string n, int r, int a, int b, int c) : Marks(n, r, a, b, c) {
        total = m1 + m2 + m3;
        average = total / 3.0;
    }

    void display() {
        cout << "Name: " << name << ", Roll: " << roll << endl;
        cout << "Total: " << total << ", Average: " << average << endl;
    }
};

int main() {
    Result r("Bhumika", 101, 80, 90, 85);
    r.display();
    return 0;
}
