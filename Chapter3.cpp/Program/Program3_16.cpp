// This program prompts the user to enter sales figures for 3 days, calculates the total, and displays it in a table.

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare variables
    double day1, day2, day3, total;

    // Enter sales figures for each day
    cout << "Enter the sales for day 1: ";
    cin >> day1;
    cout << "Enter the sales for day 2: ";
    cin >> day2;
    cout << "Enter the sales for day 3: ";
    cin >> day3;

    // Calculate total sales
    total = day1 + day2 + day3;

    // Display the sales figures in a table
    cout << "\nSales Figures\n";
    cout << "--------------\n";
    cout << setprecision(5);
    cout << "Day 1: " << setw(8) << day1 << endl;
    cout << "Day 2: " << setw(8) << day2 << endl;
    cout << "Day 3: " << setw(8) << day3 << endl;
    cout << "Total: " << setw(8) << total << endl;

    return 0;
}
