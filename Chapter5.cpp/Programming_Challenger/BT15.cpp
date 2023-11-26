#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFicaWithholdings = 0, totalNetPay = 0;

    cout << "Payroll Report\n";
    cout << "Enter employee information (or 0 to quit):\n";

    while (true) {
        cout << "Employee Number: ";
        cin >> employeeNumber;
        
        if (employeeNumber == 0) {
            break;
        }

        cout << "Gross Pay: $";
        cin >> grossPay;

        cout << "State Tax: $";
        cin >> stateTax;
        
        cout << "Federal Tax: $";
        cin >> federalTax;

        cout << "FICA Withholdings: $";
        cin >> ficaWithholdings;

        if (grossPay < 0 || stateTax < 0 || federalTax < 0 || ficaWithholdings < 0) {
            cout << "Error: Please enter non-negative values for all fields.\n";
            continue;
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Error: Withholdings exceed gross pay. Please reenter the data for employee " << employeeNumber << ".\n";
            continue;
        }

        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFicaWithholdings += ficaWithholdings;
        totalNetPay += (grossPay - stateTax - federalTax - ficaWithholdings);
    }

    cout << "Payroll Summary:\n";
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Total State Tax: $" << totalStateTax << endl;
    cout << "Total Federal Tax: $" << totalFederalTax << endl;
    cout << "Total FICA Withholdings: $" << totalFicaWithholdings << endl;
    cout << "Total Net Pay: $" << totalNetPay << endl;

    return 0;
}
