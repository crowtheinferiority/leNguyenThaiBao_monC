#include <iostream>
#include <cmath>

// Function to calculate future value
double futureValue(double presentValue, double monthlyInterestRate, int months) {
    return presentValue * std::pow(1 + monthlyInterestRate, months);
}

int main() {
    double presentValue, monthlyInterestRate;
    int months;

    // Get the present value of the account
    std::cout << "Enter the account's present value: ";
    std::cin >> presentValue;

    // Get the monthly interest rate
    std::cout << "Enter the monthly interest rate (in decimal form): ";
    std::cin >> monthlyInterestRate;

    // Get the number of months
    std::cout << "Enter the number of months: ";
    std::cin >> months;

    // Calculate and display the future value
    double future_value = futureValue(presentValue, monthlyInterestRate, months);
    std::cout << "The account's future value will be: $" << future_value << std::endl;

    return 0;
}
