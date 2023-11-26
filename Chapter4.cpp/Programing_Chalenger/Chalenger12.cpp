#include <iostream>
using namespace std;

int main() {
    int units;
    double cost = 99.0, discount = 0.0, total;

    cout << "Enter the number of units sold: ";
    cin >> units;

    if (units <= 0) {
        cout << "Error: The number of units must be greater than 0.";
        return 0;
    }

    if (units >= 10 && units <= 19) {
        discount = 0.20;
    } else if (units >= 20 && units <= 49) {
        discount = 0.30;
    } else if (units >= 50 && units <= 99) {
        discount = 0.40;
    } else if (units >= 100) {
        discount = 0.50;
    }

    total = units * cost * (1 - discount);

    cout << "The total cost of the purchase is $" << total << ".";

    return 0;
}
