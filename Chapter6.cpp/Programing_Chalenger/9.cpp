#include <iostream>
#include <cmath>

// Function to calculate present value
double presentValue(double futureValue, double annualInterestRate, int years) {
    return futureValue / std::pow(1 + annualInterestRate, years);
}

int main() {
    double futureValue, annualInterestRate;
    int years;

    // Get the future value
    std::cout << "Enter the future value: ";
    std::cin >> futureValue;

    // Get the annual interest rate
    std::cout << "Enter the annual interest rate (in decimal form): ";
    std::cin >> annualInterestRate;

    // Get the number of years
    std::cout << "Enter the number of years: ";
    std::cin >> years;

    // Calculate and display the present value
    double present_value = presentValue(futureValue, annualInterestRate, years);
    std::cout << "The amount you need to deposit today is: $" << present_value << std::endl;

    return 0;
}
