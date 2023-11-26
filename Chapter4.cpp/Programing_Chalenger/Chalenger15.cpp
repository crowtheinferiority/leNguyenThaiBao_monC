#include <iostream>
using namespace std;

int main() {
    double weight, distance, rate, charges;

    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;

    if (weight <= 0 || weight > 20) {
        cout << "Error: The weight of the package must be greater than 0 and less than or equal to 20 kg.";
        return 0;
    }

    cout << "Enter the distance it is to be shipped in miles: ";
    cin >> distance;

    if (distance < 10 || distance > 3000) {
        cout << "Error: The distance must be at least 10 miles and no more than 3,000 miles.";
        return 0;
    }

    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    }

    charges = rate * (distance / 500);

    cout << "The shipping charges are $" << charges << ".";

    return 0;
}
