#include <iostream>
using namespace std;

class Appliance {
public:
    virtual void start() = 0; // Pure virtual function
};

class WashingMachine : public Appliance {
public:
    void start() override {
        cout << "Washing Machine starting with wash cycle!\n";
    }
};

class Microwave : public Appliance {
public:
    void start() override {
        cout << "Microwave starting with heating mode!\n";
    }
};

class Refrigerator : public Appliance {
public:
    void start() override {
        cout << "Refrigerator starting cooling system!\n";
    }
};

int main() {
    Appliance* appliances[3];

    WashingMachine wm;
    Microwave mw;
    Refrigerator rf;

    appliances[0] = &wm;
    appliances[1] = &mw;
    appliances[2] = &rf;

    for (int i = 0; i < 3; i++) {
        appliances[i]->start();
    }

    return 0;
}
