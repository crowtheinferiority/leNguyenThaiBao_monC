#include <iostream>
#include <fstream>
#include <string>

struct Division {
    std::string name;
    double quarterlySales[4];
};

void inputSales(Division &division) {
    for (int i = 0; i < 4; i++) {
        do {
            std::cout << "Enter the sales for quarter " << (i + 1) << " of the " << division.name << " division: ";
            std::cin >> division.quarterlySales[i];
            if (division.quarterlySales[i] < 0) {
                std::cout << "Sales cannot be negative. Please enter again.\n";
            }
        } while (division.quarterlySales[i] < 0);
    }
}

void writeToFile(const std::string &fileName, const Division &division) {
    std::ofstream file(fileName, std::ios::app);
    if (file.is_open()) {
        file << "Division: " << division.name << "\n";
        for (int i = 0; i < 4; i++) {
            file << "Quarter " << (i + 1) << ": " << division.quarterlySales[i] << "\n";
        }
        file << "\n";
        file.close();
    } else {
        std::cout << "Unable to open file for writing" << std::endl;
    }
}

int main() {
    Division divisions[4] = {{"East"}, {"West"}, {"North"}, {"South"}};

    std::string fileName;
    std::cout << "Enter the name of the output file: ";
    std::cin >> fileName;

    for (int i = 0; i < 4; i++) {
        inputSales(divisions[i]);
        writeToFile(fileName, divisions[i]);
    }

    return 0;
}
