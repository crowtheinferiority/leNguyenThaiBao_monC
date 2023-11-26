#include <iostream>
#include <map>

int main() {
    char package;
    double minutes, total, totalB, totalC;
    std::string month;

    std::map<std::string, int> monthMinutes = {
        {"January", 44640},
        {"February", 40320},
        {"March", 44640},
        {"April", 43200},
        {"May", 44640},
        {"June", 43200},
        {"July", 44640},
        {"August", 44640},
        {"September", 43200},
        {"October", 44640},
        {"November", 43200},
        {"December", 44640}
    };

    std::cout << "Enter the package you have purchased (A, B, or C):\n";
    std::cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        std::cout << "Invalid package!\n";
        return 1;
    }

    std::cout << "Enter the month:\n";
    std::cin >> month;

    if (monthMinutes.find(month) == monthMinutes.end()) {
        std::cout << "Invalid month!\n";
        return 1;
    }

    std::cout << "Enter the number of minutes you have used:\n";
    std::cin >> minutes;

    if (minutes < 0 || minutes > monthMinutes[month]) {
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

