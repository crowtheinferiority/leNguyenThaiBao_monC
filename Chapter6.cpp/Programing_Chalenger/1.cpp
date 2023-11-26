#include <iostream>

// Function to calculate retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    return wholesaleCost + (wholesaleCost * markupPercentage / 100);
}

int main() {
    double wholesaleCost, markupPercentage;

    // Get the wholesale cost
    std::cout << "Enter the item's wholesale cost: ";
    std::cin >> wholesaleCost;

    // Validate the wholesale cost
    while (wholesaleCost < 0) {
        std::cout << "The wholesale cost cannot be negative. Please enter again: ";
        std::cin >> wholesaleCost;
    }

    // Get the markup percentage
    std::cout << "Enter the item's markup percentage: ";
    std::cin >> markupPercentage;

    // Validate the markup percentage
    while (markupPercentage < 0) {
        std::cout << "The markup percentage cannot be negative. Please enter again: ";
        std::cin >> markupPercentage;
    }

    // Calculate and display the retail price
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    std::cout << "The item's retail price is: " << retailPrice << std::endl;

    return 0;
}
