#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    cout << "Enter a month (in numeric form): ";
    cin >> month;

    cout << "Enter a day: ";
    cin >> day;

    cout << "Enter a two-digit year: ";
    cin >> year;

    if (month * day == year) {
        cout << "The date is magic.";
    } else {
        cout << "The date is not magic.";
    }

    return 0;
}
