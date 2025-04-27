#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    int accountNumber;
    string holderName;
    double balance;
    
public:
    // Default constructor
    BankAccount() {
        accountNumber = 0;
        holderName = "Unknown";
        balance = 0.0;
    }

    // Constructor with initial deposit
    BankAccount(double initialDeposit) {
        accountNumber = 0;
        holderName = "Unknown";
        balance = initialDeposit;
    }

    // Constructor with account number and holder name
    BankAccount(int accNum, string name) {
        accountNumber = accNum;
        holderName = name;
        balance = 0.0;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl << endl;
    }
};

int main() {
    BankAccount a1;
    BankAccount a2(5000);
    BankAccount a3(12345, "John Doe");

    cout << "Account 1:\n";
    a1.display();
    
    cout << "Account 2:\n";
    a2.display();
    
    cout << "Account 3:\n";
    a3.display();
    
    return 0;
}
