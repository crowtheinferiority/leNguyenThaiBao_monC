#include <iostream>
using namespace std;

int main() {
    double budget;
    cout << "Enter your budget for the month: $";
    cin >> budget;

    double totalExpenses = 0.0;
    double expense;
    char anotherExpense;

    do {
        cout << "Enter an expense: $";
        cin >> expense;
        totalExpenses += expense;

        cout << "Do you want to enter another expense? (y/n): ";
        cin >> anotherExpense;
    } while (anotherExpense == 'y' || anotherExpense == 'Y');

    double budgetDifference = budget - totalExpenses;

    if (budgetDifference < 0) {
        cout << "You are over budget by $" << -budgetDifference << endl;
    } else if (budgetDifference > 0) {
        cout << "You are under budget by $" << budgetDifference << endl;
    } else {
        cout << "You have exactly met your budget for the month." << endl;
    }

    return 0;
}
