#include <iostream>
#include <string>

struct MonthlyBudget {
    double housing = 500.00;
    double utilities = 150.00;
    double householdExpenses = 65.00;
    double transportation = 50.00;
    double food = 250.00;
    double medical = 30.00;
    double insurance = 100.00;
    double entertainment = 150.00;
    double clothing = 75.00;
    double miscellaneous = 50.00;
};

void enterAmounts(MonthlyBudget& budget) {
    std::cout << "Enter the amounts spent in each budget category during a month:" << std::endl;
    std::cout << "Housing: ";
    std::cin >> budget.housing;
    std::cout << "Utilities: ";
    std::cin >> budget.utilities;
    std::cout << "Household Expenses: ";
    std::cin >> budget.householdExpenses;
    std::cout << "Transportation: ";
    std::cin >> budget.transportation;
    std::cout << "Food: ";
    std::cin >> budget.food;
    std::cout << "Medical: ";
    std::cin >> budget.medical;
    std::cout << "Insurance: ";
    std::cin >> budget.insurance;
    std::cout << "Entertainment: ";
    std::cin >> budget.entertainment;
    std::cout << "Clothing: ";
    std::cin >> budget.clothing;
    std::cout << "Miscellaneous: ";
    std::cin >> budget.miscellaneous;
}

void displayReport(const MonthlyBudget& budget) {
    double total = budget.housing + budget.utilities + budget.householdExpenses + budget.transportation + budget.food + budget.medical + budget.insurance + budget.entertainment + budget.clothing + budget.miscellaneous;
    std::cout << "\nMonthly Budget Report:" << std::endl;
    std::cout << "Housing: " << (budget.housing - 500.00) << std::endl;
    std::cout << "Utilities: " << (budget.utilities - 150.00) << std::endl;
    std::cout << "Household Expenses: " << (budget.householdExpenses - 65.00) << std::endl;
    std::cout << "Transportation: " << (budget.transportation - 50.00) << std::endl;
    std::cout << "Food: " << (budget.food - 250.00) << std::endl;
    std::cout << "Medical: " << (budget.medical - 30.00) << std::endl;
    std::cout << "Insurance: " << (budget.insurance - 100.00) << std::endl;
    std::cout << "Entertainment: " << (budget.entertainment - 150.00) << std::endl;
    std::cout << "Clothing: " << (budget.clothing - 75.00) << std::endl;
    std::cout << "Miscellaneous: " << (budget.miscellaneous - 50.00) << std::endl;
    std::cout << "Total: " << (total - 1420.00) << std::endl;
}

int main() {
    MonthlyBudget budget;
    enterAmounts(budget);
    displayReport(budget);
    return 0;
}
