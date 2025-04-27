#include <iostream>
using namespace std;

class Musicians {
public:
    void show() {
        cout << "Musicians play instruments." << endl;
    }
};

class InsType : public Musicians {
public:
    void category() {
        cout << "Instrument type: String, Wind, Percussion..." << endl;
    }
};

int main() {
    InsType i;
    i.show();
    i.category();
    return 0;
}
