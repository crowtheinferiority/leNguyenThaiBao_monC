#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

struct InventoryItem {
    std::string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    std::string dateAdded;
};

void addRecord(std::ofstream &file, const InventoryItem &item) {
    file << item.description << "\n";
    file << item.quantity << "\n";
    file << std::fixed << std::setprecision(2) << item.wholesaleCost << "\n";
    file << std::fixed << std::setprecision(2) << item.retailCost << "\n";
    file << item.dateAdded << "\n";
}

void displayRecord(std::ifstream &file) {
    InventoryItem item;
    std::getline(file, item.description);
    file >> item.quantity;
    file >> item.wholesaleCost;
    file >> item.retailCost;
    file.ignore(); // skip newline character
    std::getline(file, item.dateAdded);

    std::cout << "Description: " << item.description << "\n";
    std::cout << "Quantity: " << item.quantity << "\n";
    std::cout << "Wholesale cost: " << item.wholesaleCost << "\n";
    std::cout << "Retail cost: " << item.retailCost << "\n";
    std::cout << "Date added: " << item.dateAdded << "\n";
}

void changeRecord(std::fstream &file, int recordNumber, const InventoryItem &item) {
    file.seekp((recordNumber - 1) * sizeof(InventoryItem));
    addRecord(file, item);
}

int main() {
    std::ofstream outputFile("inventory.txt");
    if (!outputFile) {
        std::cout << "Unable to open file for writing" << std::endl;
        return 1;
    }

    InventoryItem item = {"Item 1", 10, 20.0, 30.0, "01/01/2020"};
    addRecord(outputFile, item);

    outputFile.close();

    std::ifstream inputFile("inventory.txt");
    if (!inputFile) {
        std::cout << "Unable to open file for reading" << std::endl;
        return 1;
    }

    displayRecord(inputFile);

    inputFile.close();

    std::fstream file("inventory.txt");
    if (!file) {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }

    InventoryItem newItem = {"Item 2", 20, 30.0, 40.0, "02/02/2020"};
    changeRecord(file, 1, newItem);

    file.seekg(0);
    displayRecord(file);

    file.close();

    return 0;
}
