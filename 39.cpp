#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file("sample.txt", ios::out | ios::in | ios::trunc);
    file << "ABCDEFGH";
    file.seekp(3);
    file << "Z";
    file.seekg(0);
    
    char ch;
    while (file.get(ch)) {
        cout << ch;
    }
    file.close();
    return 0;
}
