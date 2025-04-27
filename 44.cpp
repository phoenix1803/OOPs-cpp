#include <iostream>
namespace First {
    void display() {
        std::cout << "Inside First namespace" << std::endl;
    }
}

namespace Second {
    void display() {
        std::cout << "Inside Second namespace" << std::endl;
    }
}

int main() {
    using namespace First; // Using First namespace
    display();             // Calls First::display()

    Second::display();     // Scope resolution for Second namespace

    return 0;
}
