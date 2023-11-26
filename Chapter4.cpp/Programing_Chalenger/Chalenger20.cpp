#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int choice;
    double distance, speed;

    cout << "Select a medium:\n";
    cout << "1. Air\n";
    cout << "2. Water\n";
    cout << "3. Steel\n";
    cin >> choice;

    if (choice < 1 || choice > 3) {
        cout << "Error: You must select 1, 2, or 3.";
        return 0;
    }

    cout << "Enter the distance the sound wave will travel (in feet): ";
    cin >> distance;

    if (distance <= 0) {
        cout << "Error: The distance must be greater than 0.";
        return 0;
    }

    if (choice == 1) {
        speed = 1100;
    } else if (choice == 2) {
        speed = 4900;
    } else {
        speed = 16400;
    }

    double time = distance / speed;

    cout << fixed << setprecision(4);
    cout << "The time it will take is " << time << " seconds.";

    return 0;
}
