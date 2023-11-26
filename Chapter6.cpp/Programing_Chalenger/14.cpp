#include <iostream>

// Function to get the order data
void getOrderData(int &numSpoolsOrdered, int &numSpoolsInStock, double &shippingAndHandlingCharges) {
    do {
        std::cout << "Enter the number of spools ordered: ";
        std::cin >> numSpoolsOrdered;
        if (numSpoolsOrdered < 1) {
            std::cout << "Invalid number. Please enter a number greater than 0." << std::endl;
        }
    } while (numSpoolsOrdered < 1);

    do {
        std::cout << "Enter the number of spools in stock: ";
        std::cin >> numSpoolsInStock;
        if (numSpoolsInStock < 0) {
            std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
        }
    } while (numSpoolsInStock < 0);

    char hasSpecialCharges;
    std::cout << "Are there special shipping and handling charges? (y/n): ";
    std::cin >> hasSpecialCharges;
    if (hasSpecialCharges == 'y' || hasSpecialCharges == 'Y') {
        do {
            std::cout << "Enter the special charges per spool: ";
            std::cin >> shippingAndHandlingCharges;
            if (shippingAndHandlingCharges < 0) {
                std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
            }
        } while (shippingAndHandlingCharges < 0);
    } else {
        shippingAndHandlingCharges = 10.00;
    }
}

// Function to display the order status
void displayOrderStatus(int numSpoolsOrdered, int numSpoolsInStock, double shippingAndHandlingCharges) {
    int numSpoolsReadyToShip = std::min(numSpoolsOrdered, numSpoolsInStock);
    int numSpoolsOnBackorder = numSpoolsOrdered > numSpoolsInStock ? numSpoolsOrdered - numSpoolsInStock : 0;
    double subtotal = numSpoolsReadyToShip * 100.00;
    double totalShippingAndHandlingCharges = numSpoolsReadyToShip * shippingAndHandlingCharges;
    double total = subtotal + totalShippingAndHandlingCharges;

    std::cout << "Number of spools ready to ship from current stock: " << numSpoolsReadyToShip << std::endl;
    std::cout << "Number of spools on backorder: " << numSpoolsOnBackorder << std::endl;
    std::cout << "Subtotal of the portion ready to ship: $" << subtotal << std::endl;
    std::cout << "Total shipping and handling charges on the portion ready to ship: $" << totalShippingAndHandlingCharges << std::endl;
    std::cout << "Total of the order ready to ship: $" << total << std::endl;
}

int main() {
    int numSpoolsOrdered, numSpoolsInStock;
    double shippingAndHandlingCharges;

    getOrderData(numSpoolsOrdered, numSpoolsInStock, shippingAndHandlingCharges);
    displayOrderStatus(numSpoolsOrdered, numSpoolsInStock, shippingAndHandlingCharges);

    return 0;
}
