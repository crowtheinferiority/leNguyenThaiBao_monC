#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters;
    double total;

    cout << "Enter the number of pennies: ";
    cin >> pennies;

    cout << "Enter the number of nickels: ";
    cin >> nickels;

    cout << "Enter the number of dimes: ";
    cin >> dimes;

    cout << "Enter the number of quarters: ";
    cin >> quarters;

    total = pennies * 0.01 + nickels * 0.05 + dimes * 0.10 + quarters * 0.25;

    if (total == 1.00) {
        cout << "Congratulations! You won the game.";
    } else if (total > 1.00) {
        cout << "The amount you entered was more than one dollar.";
    } else {
        cout << "The amount you entered was less than one dollar.";
    }

    return 0;
}
