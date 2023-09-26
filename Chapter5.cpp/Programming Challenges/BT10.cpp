#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;
    int totalMonths = 0;

    cout << "Enter the number of years: ";
    cin >> numYears;

    if (numYears < 1) {
        cout << "Invalid input. Please enter a number greater than 0 for the number of years." << endl;
        return 1;
    }

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
            cin >> rainfall;

            if (rainfall < 0) {
                cout << "Invalid input. Rainfall cannot be negative. Please re-enter." << endl;
                month--; // Repeat the current month's input
                continue;
            }

            totalRainfall += rainfall;
            totalMonths++;
        }
    }

    double averageRainfall = totalRainfall / totalMonths;

    cout << "Number of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average rainfall per month: " << averageRainfall << " inches" << endl;

    return 0;
}
