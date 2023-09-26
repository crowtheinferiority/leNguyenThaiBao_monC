#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance, balance, deposit, withdrawal, monthlyInterestRate;
    int months;
    double totalDeposits = 0, totalWithdrawals = 0, totalInterestEarned = 0;

    cout << "Savings Account Balance Calculator\n";
    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: $";
    cin >> startingBalance;
    cout << "Enter the number of months: ";
    cin >> months;

    balance = startingBalance;
    monthlyInterestRate = annualInterestRate / 12;

    for (int i = 1; i <= months; i++) {
        cout << "Month " << i << ":\n";
        
        cout << "Enter the amount deposited for this month: $";
        cin >> deposit;
        if (deposit < 0) {
            cout << "Invalid input. Please enter a non-negative amount.\n";
            i--; // Decrement i to repeat this iteration
            continue;
        }
        totalDeposits += deposit;
        balance += deposit;

        cout << "Enter the amount withdrawn for this month: $";
        cin >> withdrawal;
        if (withdrawal < 0) {
            cout << "Invalid input. Please enter a non-negative amount.\n";
            i--; // Decrement i to repeat this iteration
            continue;
        }
        totalWithdrawals += withdrawal;
        balance -= withdrawal;

        double monthlyInterest = balance * monthlyInterestRate;
        totalInterestEarned += monthlyInterest;
        balance += monthlyInterest;
    }

    cout << "End of " << months << " months:\n";
    cout << "Ending Balance: $" << balance << endl;
    cout << "Total Deposits: $" << totalDeposits << endl;
    cout << "Total Withdrawals: $" << totalWithdrawals << endl;
    cout << "Total Interest Earned: $" << totalInterestEarned << endl;

    return 0;
}
