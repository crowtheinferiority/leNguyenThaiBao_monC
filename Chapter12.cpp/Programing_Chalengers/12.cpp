#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

struct Division {
    std::string name;
    double quarterlySales[4];
};

void readFromFile(const std::string &fileName, std::vector<Division> &divisions) {
    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string line;
        while (std::getline(file, line)) {
            if (line.find("Division") != std::string::npos) {
                Division division;
                division.name = line.substr(line.find(":") + 2);
                for (int i = 0; i < 4; i++) {
                    std::getline(file, line);
                    division.quarterlySales[i] = std::stod(line.substr(line.find(":") + 2));
                }
                divisions.push_back(division);
                std::getline(file, line); // skip empty line
            }
        }
        file.close();
    } else {
        std::cout << "Unable to open file for reading" << std::endl;
    }
}

int main() {
    std::string fileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> fileName;

    std::vector<Division> divisions;
    readFromFile(fileName, divisions);

    double totalCorporateSales[4] = {0};
    double totalYearlyCorporateSales = 0;
    for (const auto &division : divisions) {
        double totalYearlySales = 0;
        for (int i = 0; i < 4; i++) {
            totalYearlySales += division.quarterlySales[i];
            totalCorporateSales[i] += division.quarterlySales[i];
        }
        totalYearlyCorporateSales += totalYearlySales;
        std::cout << "Total yearly sales for the " << division.name << " division: " << totalYearlySales << "\n";
    }

    for (int i = 0; i < 4; i++) {
        std::cout << "Total corporate sales for quarter " << (i + 1) << ": " << totalCorporateSales[i] << "\n";
    }
    std::cout << "Total yearly corporate sales: " << totalYearlyCorporateSales << "\n";

    double totalQuarterlySales = 0;
    for (int i = 0; i < 4; i++) {
        totalQuarterlySales += totalCorporateSales[i];
    }
    std::cout << "Average quarterly sales for the divisions: " << (totalQuarterlySales / 4) << "\n";

    auto minmax = std::minmax_element(totalCorporateSales, totalCorporateSales + 4);
    std::cout << "The highest quarter for the corporation: Quarter " << (std::distance(totalCorporateSales, minmax.second) + 1) << "\n";
    std::cout << "The lowest quarter for the corporation: Quarter " << (std::distance(totalCorporateSales, minmax.first) + 1) << "\n";

    return 0;
}
