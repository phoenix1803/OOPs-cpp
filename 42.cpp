#include <iostream>
#include <string>
using namespace std;

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

// Overload for strings
string maximum(string a, string b) {
    return (a.length() > b.length()) ? a : b;
}

int main() {
    cout << "Max of 3 and 7: " << maximum(3, 7) << endl;
    cout << "Max of 3.5 and 2.5: " << maximum(3.5, 2.5) << endl;
    cout << "Max of 'apple' and 'banana': " << maximum(string("apple"), string("banana")) << endl;
    return 0;
}
