#include <iostream>
using namespace std;

int main() {
    int month, year;

    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Enter a year: ";
    cin >> year;

    switch (month) {
        case 2:
            if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
                cout << "29 days";
            } else {
                cout << "28 days";
            }
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days";
            break;
        default:
            cout << "31 days";
    }

    return 0;
}
