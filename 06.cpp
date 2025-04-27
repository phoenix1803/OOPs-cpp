#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    int &ref = a;

    cout << "Original value: " << a << endl;

    *p = 20;
    cout << "After pointer change: " << a << endl;

    ref = 30;
    cout << "After reference change: " << a << endl;

    return 0;
}
