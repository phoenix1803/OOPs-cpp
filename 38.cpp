#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("data.txt");
    fout << "Hello, File Handling in C++!";
    fout.close();

    ifstream fin("data.txt");
    string line;
    while (getline(fin, line)) {
        cout << line << endl;
    }
    fin.close();

    return 0;
}
