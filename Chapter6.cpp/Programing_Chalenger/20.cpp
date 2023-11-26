#include <iostream>

// Function to calculate the profit or loss
double calculateProfit(int NS, double SP, double SC, double PP, double PC) {
    return ((NS * SP) - SC) - ((NS * PP) + PC);
}

int main() {
    int NS;
    double SP, SC, PP, PC, profit;

    // Get the necessary data from the user
    std::cout << "Enter the number of shares: ";
    std::cin >> NS;
    std::cout << "Enter the sale price per share: ";
    std::cin >> SP;
    std::cout << "Enter the sale commission paid: ";
    std::cin >> SC;
    std::cout << "Enter the purchase price per share: ";
    std::cin >> PP;
    std::cout << "Enter the purchase commission paid: ";
    std::cin >> PC;

    // Calculate the profit or loss
    profit = calculateProfit(NS, SP, SC, PP, PC);

    // Display the amount of the profit or loss
    if (profit > 0) {
        std::cout << "The sale of the stock resulted in a profit of $" << profit << ".\n";
    } else if (profit < 0) {
        std::cout << "The sale of the stock resulted in a loss of $" << -profit << ".\n";
    } else {
        std::cout << "The sale of the stock resulted in neither a profit nor a loss.\n";
    }

    return 0;
}
