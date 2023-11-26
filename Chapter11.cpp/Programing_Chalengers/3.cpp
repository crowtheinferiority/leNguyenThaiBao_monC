#include <iostream>
#include <string>

struct Division {
    std::string name;
    double sales[4];
    double totalSales;
    double averageSales;
};

void calculateSales(Division& division) {
    division.totalSales = 0;
    for (int i = 0; i < 4; ++i) {
        division.totalSales += division.sales[i];
    }
    division.averageSales = division.totalSales / 4;
}

void displaySales(const Division& division) {
    std::cout << "Division: " << division.name << std::endl;
    std::cout << "Total Annual Sales: " << division.totalSales << std::endl;
    std::cout << "Average Quarterly Sales: " << division.averageSales << std::endl;
}

int main() {
    Division divisions[4] = {{"East"}, {"West"}, {"North"}, {"South"}};

    for (int i = 0; i < 4; ++i) {
        std::cout << "Enter the four quarters' sales figures for the " << divisions[i].name << " division:" << std::endl;
        for (int j = 0; j < 4; ++j) {
            do {
                std::cout << "Quarter " << (j + 1) << ": ";
                std::cin >> divisions[i].sales[j];
                if (divisions[i].sales[j] < 0) {
                    std::cout << "Sales figures cannot be negative. Please enter again." << std::endl;
                }
            } while (divisions[i].sales[j] < 0);
        }
        calculateSales(divisions[i]);
    }

    for (int i = 0; i < 4; ++i) {
        displaySales(divisions[i]);
        std::cout << std::endl;
    }

    return 0;
}
