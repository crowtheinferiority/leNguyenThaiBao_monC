#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    ofstream outputFile("SavingsAccountReport.txt"); // Open a file for writing
    if (!outputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    double balance, annualInterestRate, monthlyDeposit;
    int months;

    // Input data
    cout << "Enter the initial balance: $";
    cin >> balance;
    cout << "Enter the annual interest rate (in decimal form): ";
    cin >> annualInterestRate;
    cout << "Enter the monthly deposit: $";
    cin >> monthlyDeposit;
    cout << "Enter the number of months: ";
    cin >> months;

    // Display the table header in the console
    cout << "Month    Opening Balance   Monthly Deposit   Interest    Closing Balance\n";

    // Display and write the report to the file
    for (int month = 1; month <= months; month++) {
        double interest = (balance + monthlyDeposit) * (annualInterestRate / 12);
        balance = balance + monthlyDeposit + interest;
        
        cout << setw(3) << month << setw(18) << fixed << setprecision(2) << balance - monthlyDeposit - interest
             << setw(18) << monthlyDeposit << setw(12) << interest << setw(18) << balance << endl;

        // Write data to the file
        outputFile << month << " " << balance - monthlyDeposit - interest << " " << monthlyDeposit << " " << interest << " " << balance << endl;
    }

    outputFile.close();
    cout << "Report written to SavingsAccountReport.txt" << endl;
    
    return 0;
}
