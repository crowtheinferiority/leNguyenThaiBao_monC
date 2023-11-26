#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numDays;

    // Input the number of days
    cout << "Enter the number of days: ";
    cin >> numDays;

    // Validate input
    if (numDays < 1) {
        cout << "Number of days worked must be at least 1. Please try again.\n";
        return 1; // Terminate the program with error code 1
    }

    double totalPay = 0.0;
    double salary = 0.01; // Initial salary is one penny

    // Display the table header
    cout << "Day       Salary\n";
    cout << "----------------\n";

    // Calculate and display earnings for each day
    for (int day = 1; day <= numDays; day++) {
        totalPay += salary;
        cout << setw(3) << day << "     $" << fixed << setprecision(2) << salary << endl;
        salary *= 2; // Double the salary for the next day
    }

    // Display the total pay in dollars
    cout << "Total pay: $" << fixed << setprecision(2) << totalPay << endl;

    return 0; // Terminate the program successfully
}
