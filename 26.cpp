#include <iostream>
using namespace std;

class Student {
protected:
    int roll, marks[3];

public:
    void get() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of 3 subjects: ";
        for (int i = 0; i < 3; i++) cin >> marks[i];
    }
};

class Sports {
protected:
    int sportMarks;

public:
    void getsm() {
        cout << "Enter sports marks: ";
        cin >> sportMarks;
    }
};

class ReportCard : public Student, public Sports {
public:
    void display() {
        int total = sportMarks;
        for (int i = 0; i < 3; i++) total += marks[i];
        float average = total / 4.0;

        cout << "Roll No: " << roll << endl;
        cout << "Total Marks (Academic + Sports): " << total << endl;
        cout << "Average: " << average << endl;
    }
};

int main() {
    ReportCard r;
    r.get();
    r.getsm();
    r.display();
    return 0;
}