#include <iostream>
#include <string>
using namespace std;

struct Vault {
    string date;
    double height;
};

void sortVaults(Vault vaults[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (vaults[j].height < vaults[j + 1].height) {
                Vault temp = vaults[j];
                vaults[j] = vaults[j + 1];
                vaults[j + 1] = temp;
            }
        }
    }
}

int main() {
    string name;
    Vault vaults[3];

    cout << "Enter the name of the pole vaulter: ";
    cin >> name;

    for (int i = 0; i < 3; i++) {
        cout << "Enter the date of vault " << i + 1 << ": ";
        cin >> vaults[i].date;

        do {
            cout << "Enter the height of vault " << i + 1 << " (between 2.0 and 5.0): ";
            cin >> vaults[i].height;
        } while (vaults[i].height < 2.0 || vaults[i].height > 5.0);
    }

    sortVaults(vaults, 3);

    cout << "\nPersonal Best Vaults of " << name << ":\n";
    for (int i = 0; i < 3; i++) {
        cout << "Date: " << vaults[i].date << ", Height: " << vaults[i].height << " meters\n";
    }

    return 0;
}
