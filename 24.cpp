#include <iostream>
using namespace std;

class Musicians {
protected:
    string str[5], wind[5], perc[5];

public:
    void string_instruments() {
        str[0] = "Veena"; str[1] = "Guitar"; str[2] = "Sitar"; str[3] = "Sarod"; str[4] = "Mandolin";
    }

    void wind_instruments() {
        wind[0] = "Flute"; wind[1] = "Clarinet"; wind[2] = "Saxophone"; wind[3] = "Nadhaswaram"; wind[4] = "Piccolo";
    }

    void percussion_instruments() {
        perc[0] = "Tabla"; perc[1] = "Mridangam"; perc[2] = "Bongos"; perc[3] = "Drums"; perc[4] = "Tambour";
    }

    void show(int choice) {
        if (choice == 1) {
            cout << "String Instruments:\n";
            for (auto &i : str) cout << i << " ";
            cout << endl;
        } else if (choice == 2) {
            cout << "Wind Instruments:\n";
            for (auto &i : wind) cout << i << " ";
            cout << endl;
        } else if (choice == 3) {
            cout << "Percussion Instruments:\n";
            for (auto &i : perc) cout << i << " ";
            cout << endl;
        }
    }
};

class InsType : public Musicians {
public:
    int get() {
        int choice;
        cout << "Type of instruments to be displayed:\n";
        cout << "1. String Instruments\n2. Wind Instruments\n3. Percussion Instruments\n";
        cout << "Enter choice: ";
        cin >> choice;
        return choice;
    }

    void display(int choice) {
        string_instruments();
        wind_instruments();
        percussion_instruments();
        show(choice);
    }
};

int main() {
    InsType obj;
    int choice = obj.get();
    obj.display(choice);
    return 0;
}
