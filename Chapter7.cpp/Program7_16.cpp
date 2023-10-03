#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // Number of employees
    int hoursWorked[NUM_EMPLOYEES]; // Array to store hours worked
    double hourlyWage; // Hourly wage rate
    double totalEarnings; // To hold total earnings

    // Input hours worked by each employee.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees, all earning the same hourly wage:\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hoursWorked[index];
    }

    // Input the hourly wage rate for all employees.
    cout << "Enter the hourly wage rate for all employees: ";
    cin >> hourlyWage;

    // Display total earnings for each employee.
    cout << "Here is the total earnings for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        totalEarnings = hoursWorked[index] * hourlyWage;
        cout << "Employee #" << (index + 1) << ": $" << totalEarnings << endl;
    }

    return 0; // Don't forget the semicolon after `return 0`.
}
