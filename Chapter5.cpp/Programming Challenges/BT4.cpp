#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const double initialFee = 2500.0;
    const double annualIncreaseRate = 0.04;

    cout << "Year\tProjected Fee" << endl;
    cout << "-------------------" << endl;

    double membershipFee = initialFee;
    for (int year = 1; year <= 6; year++) {
        cout << year << "\t$" << fixed << setprecision(2) << membershipFee << endl;
        membershipFee += membershipFee * annualIncreaseRate;
    }

    return 0;
}
