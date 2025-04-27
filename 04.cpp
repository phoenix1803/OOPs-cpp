#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4, m5;
    float avg;
    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;
    avg = (m1 + m2 + m3 + m4 + m5) / 5.0;
    cout << "Average = " << avg << endl;
    if (avg >= 90) cout << "Grade: A";
    else if (avg >= 75) cout << "Grade: B";
    else if (avg >= 60) cout << "Grade: C";
    else if (avg >= 40) cout << "Grade: D";
    else cout << "Grade: F";
    return 0;
}
