#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double risePerYear = 1.5; // Ocean rise per year in millimeters
    const int numberOfYears = 25;

    cout << "Year\tMillimeters Risen" << endl;
    cout << "-----------------------" << endl;

    for (int year = 1; year <= numberOfYears; ++year) {
        double millimetersRisen = year * risePerYear;
        cout << setw(4) << year << "\t" << setw(16) << millimetersRisen << endl;
    }

    return 0;
}
