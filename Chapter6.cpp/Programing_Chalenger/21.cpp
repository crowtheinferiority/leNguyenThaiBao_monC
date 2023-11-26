#include <iostream>

// Function to calculate the profit or loss
double calculateProfit(int NS, double SP, double SC, double PP, double PC) {
    return ((NS * SP) - SC) - ((NS * PP) + PC);
}

int main() {
    int numSales, NS;
    double SP, SC, PP, PC, profit, totalProfit = 0;

    // Get the number of stock sales
    std::cout << "Enter the number of stock sales: ";
    std::cin >> numSales;

    for (int i = 0; i < numSales; i++) {
        // Get the necessary data for each stock sale
        std::cout << "Enter the number of shares for sale " << (i+1) << ": ";
        std::cin >> NS;
        std::cout << "Enter the sale price per share for sale " << (i+1) << ": ";
        std::cin >> SP;
        std::cout << "Enter the sale commission paid for sale " << (i+1) << ": ";
        std::cin >> SC;
        std::cout << "Enter the purchase price per share for sale " << (i+1) << ": ";
        std::cin >> PP;
        std::cout << "Enter the purchase commission paid for sale " << (i+1) << ": ";
        std::cin >> PC;

        // Calculate the profit or loss for this stock sale
        profit = calculateProfit(NS, SP, SC, PP, PC);

        // Accumulate the total profit or loss
        totalProfit += profit;
    }

    // Display the total profit or loss
    if (totalProfit > 0) {
        std::cout << "The total profit from the sales is $" << totalProfit << ".\n";
    } else if (totalProfit < 0) {
        std::cout << "The total loss from the sales is $" << -totalProfit << ".\n";
    } else {
        std::cout << "The total amount from the sales is neither a profit nor a loss.\n";
    }

    return 0;
}
