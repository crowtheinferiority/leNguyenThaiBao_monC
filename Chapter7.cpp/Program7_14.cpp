#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // Number of employees
    int hoursWorked[NUM_EMPLOYEES]; // Array to hold hours worked
    double hourlyPayRate; // Hourly pay rate
    double grossPay; // To hold the gross pay

    // Input the hours worked by employees.
    cout << "Enter the hours worked by " << NUM_EMPLOYEES << " employees, all earning the same hourly rate:\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employee #" << (index + 1) << ": ";
        cin >> hoursWorked[index];
    }

    // Input the hourly pay rate for all employees.
    cout << "Enter the hourly pay rate for all employees: ";
    cin >> hourlyPayRate;

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hoursWorked[index] * hourlyPayRate;
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}