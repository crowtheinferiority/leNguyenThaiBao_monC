#include <iostream>
#include <fstream>
#include <string>

struct InventoryItem {
    std::string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    std::string dateAdded;
};

void readRecord(std::ifstream &file, InventoryItem &item) {
    std::getline(file, item.description);
    file >> item.quantity;
    file >> item.wholesaleCost;
    file >> item.retailCost;
    file.ignore(); // skip newline character
    std::getline(file, item.dateAdded);
}

int main() {
    std::string fileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> fileName;

    std::ifstream inputFile(fileName);
    if (!inputFile) {
        std::cout << "Unable to open file for reading" << std::endl;
        return 1;
    }

    double totalWholesaleValue = 0;
    double totalRetailValue = 0;
    int totalQuantity = 0;

    while (!inputFile.eof()) {
        InventoryItem item;
        readRecord(inputFile, item);
        totalWholesaleValue += item.quantity * item.wholesaleCost;
        totalRetailValue += item.quantity * item.retailCost;
        totalQuantity += item.quantity;
    }

    std::cout << "Total wholesale value of the inventory: " << totalWholesaleValue << "\n";
    std::cout << "Total retail value of the inventory: " << totalRetailValue << "\n";
    std::cout << "Total quantity of all items in the inventory: " << totalQuantity << "\n";

    inputFile.close();

    return 0;
}
