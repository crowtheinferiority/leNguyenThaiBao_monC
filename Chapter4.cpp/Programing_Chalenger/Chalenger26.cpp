#include <iostream>

int main() {
    char package;
    double minutes, total, totalB, totalC;

    std::cout << "Enter the package you have purchased (A, B, or C):\n";
    std::cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        std::cout << "Invalid package!\n";
        return 1;
    }

    std::cout << "Enter the number of minutes you have used:\n";
    std::cin >> minutes;

    if (minutes < 0) {
        std::cout << "Invalid number of minutes!\n";
        return 1;
    }

    switch (package) {
        case 'A':
            total = 39.99;
            if (minutes > 450) {
                total += (minutes - 450) * 0.45;
            }
            totalB = 59.99;
            if (minutes > 900) {
                totalB += (minutes - 900) * 0.40;
            }
            totalC = 69.99;
            if (total > totalB) {
                std::cout << "Switching to Package B would save you $" << total - totalB << ".\n";
            }
            if (total > totalC) {
                std::cout << "Switching to Package C would save you $" << total - totalC << ".\n";
            }
            break;
        case 'B':
            total = 59.99;
            if (minutes > 900) {
                total += (minutes - 900) * 0.40;
            }
            totalC = 69.99;
            if (total > totalC) {
                std::cout << "Switching to Package C would save you $" << total - totalC << ".\n";
            }
            break;
        case 'C':
            total = 69.99;
            break;
    }

    std::cout << "The total amount due is $" << total << ".\n";

    return 0;
}
