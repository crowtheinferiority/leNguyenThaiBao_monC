#include <iostream>
#include <fstream>
#include <string>

struct CustomerAccount {
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string telephoneNumber;
    double accountBalance;
    std::string lastPaymentDate;
};

void addRecord(std::ofstream &file, const CustomerAccount &account) {
    file << account.name << "\n";
    file << account.address << "\n";
    file << account.cityStateZip << "\n";
    file << account.telephoneNumber << "\n";
    file << account.accountBalance << "\n";
    file << account.lastPaymentDate << "\n";
}

void displayRecord(std::ifstream &file) {
    CustomerAccount account;
    std::getline(file, account.name);
    std::getline(file, account.address);
    std::getline(file, account.cityStateZip);
    std::getline(file, account.telephoneNumber);
    file >> account.accountBalance;
    file.ignore(); // skip newline character
    std::getline(file, account.lastPaymentDate);

    std::cout << "Name: " << account.name << "\n";
    std::cout << "Address: " << account.address << "\n";
    std::cout << "City, State, and ZIP: " << account.cityStateZip << "\n";
    std::cout << "Telephone number: " << account.telephoneNumber << "\n";
    std::cout << "Account balance: " << account.accountBalance << "\n";
    std::cout << "Last payment date: " << account.lastPaymentDate << "\n";
}

void changeRecord(std::fstream &file, int recordNumber, const CustomerAccount &account) {
    file.seekp((recordNumber - 1) * sizeof(CustomerAccount));
    addRecord(file, account);
}

int main() {
    std::ofstream outputFile("accounts.txt");
    if (!outputFile) {
        std::cout << "Unable to open file for writing" << std::endl;
        return 1;
    }

    CustomerAccount account = {"John Doe", "123 Main St", "Anytown, USA 12345", "555-555-5555", 100.0, "01/01/2020"};
    addRecord(outputFile, account);

    outputFile.close();

    std::ifstream inputFile("accounts.txt");
    if (!inputFile) {
        std::cout << "Unable to open file for reading" << std::endl;
        return 1;
    }

    displayRecord(inputFile);

    inputFile.close();

    std::fstream file("accounts.txt");
    if (!file) {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }

    CustomerAccount newAccount = {"Jane Doe", "456 Elm St", "Anytown, USA 12345", "555-555-5555", 200.0, "02/02/2020"};
    changeRecord(file, 1, newAccount);

    file.seekg(0);
    displayRecord(file);

    file.close();

    return 0;
}
