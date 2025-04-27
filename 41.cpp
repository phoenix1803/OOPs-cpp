#include <iostream>
using namespace std;

int main() {
    try {
        try {
            throw 100; // Throwing an integer
        } catch (int e) {
            cout << "Caught integer exception: " << e << endl;
        }

        throw "Outer exception"; // Throwing a string
    } catch (const char* msg) {
        cout << "Caught string exception: " << msg << endl;
    }

    return 0;
}
