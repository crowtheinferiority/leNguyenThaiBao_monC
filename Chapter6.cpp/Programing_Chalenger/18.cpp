#include <iostream>
#include <vector>
#include <cmath>

// Function to calculate the number of gallons of paint required
int calculateGallons(int squareFeet) {
    return std::ceil(static_cast<double>(squareFeet) / 110);
}

// Function to calculate the hours of labor required
int calculateHours(int squareFeet) {
    return calculateGallons(squareFeet) * 8;
}

// Function to calculate the cost of the paint
double calculatePaintCost(int gallons, double paintPrice) {
    return gallons * paintPrice;
}

// Function to calculate the labor charges
double calculateLaborCharges(int hours) {
    return hours * 25.00;
}

int main() {
    int numRooms;
    double paintPrice;

    do {
        std::cout << "Enter the number of rooms to be painted: ";
        std::cin >> numRooms;
        if (numRooms < 1) {
            std::cout << "Invalid number. Please enter a number greater than 0." << std::endl;
        }
    } while (numRooms < 1);

    do {
        std::cout << "Enter the price of the paint per gallon: ";
        std::cin >> paintPrice;
        if (paintPrice < 10.00) {
            std::cout << "Invalid price. Please enter a price greater than or equal to $10.00." << std::endl;
        }
    } while (paintPrice < 10.00);

    int totalSquareFeet = 0;
    for (int i = 0; i < numRooms; ++i) {
        int squareFeet;
        do {
            std::cout << "Enter the square feet of wall space in room " << i + 1 << ": ";
            std::cin >> squareFeet;
            if (squareFeet < 0) {
                std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
            }
        } while (squareFeet < 0);
        totalSquareFeet += squareFeet;
    }

    int gallons = calculateGallons(totalSquareFeet);
    int hours = calculateHours(totalSquareFeet);
    double paintCost = calculatePaintCost(gallons, paintPrice);
    double laborCharges = calculateLaborCharges(hours);
    double totalCost = paintCost + laborCharges;

    std::cout << "The number of gallons of paint required: " << gallons << std::endl;
    std::cout << "The hours of labor required: " << hours << std::endl;
    std::cout << "The cost of the paint: $" << paintCost << std::endl;
    std::cout << "The labor charges: $" << laborCharges << std::endl;
    std::cout << "The total cost of the paint job: $" << totalCost << std::endl;

    return 0;
}
