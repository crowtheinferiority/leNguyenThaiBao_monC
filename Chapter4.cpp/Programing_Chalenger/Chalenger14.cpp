#include <iostream>
using namespace std;

int main() {
    double balance;
    int checks;
    double fees = 10.0;

    cout << "Enter the beginning balance: ";
    cin >> balance;

    if (balance < 0) {
        cout << "Urgent! Your account is overdrawn.";
        return 0;
    }

    cout << "Enter the number of checks written: ";
    cin >> checks;

    if (checks < 0) {
        cout << "Error: The number of checks cannot be negative.";
        return 0;
    }

    if (checks < 20) {
        fees += checks * 0.10;
    } else if (checks <= 39) {
        fees += checks * 0.08;
    } else if (checks <= 59) {
        fees += checks * 0.06;
    } else {
        fees += checks * 0.04;
    }

    if (balance - fees < 400) {
        fees += 15;
    }

    cout << "The bank's service fees for the month are $" << fees << ".";

    return 0;
}
