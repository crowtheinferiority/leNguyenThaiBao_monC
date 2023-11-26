#include <iostream>
#include <string>

// Function to get the sales of a division
double getSales(std::string division) {
    double sales;
    std::cout << "Enter the " << division << " division's quarterly sales figure: ";
    std::cin >> sales;

    // Validate the sales figure
    while (sales < 0) {
        std::cout << "The sales figure cannot be negative. Please enter again: ";
        std::cin >> sales;
    }

    return sales;
}

// Function to find and print the division with the highest sales
void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) {
    double highestSales = northeastSales;
    std::string highestDivision = "Northeast";

    if (southeastSales > highestSales) {
        highestSales = southeastSales;
        highestDivision = "Southeast";
    }

    if (northwestSales > highestSales) {
        highestSales = northwestSales;
        highestDivision = "Northwest";
    }

    if (southwestSales > highestSales) {
        highestSales = southwestSales;
        highestDivision = "Southwest";
    }

    std::cout << "The high grossing division is " << highestDivision << " with a sales figure of: " << highestSales << std::endl;
}

int main() {
    double northeastSales = getSales("Northeast");
    double southeastSales = getSales("Southeast");
    double northwestSales = getSales("Northwest");
    double southwestSales = getSales("Southwest");

    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}
