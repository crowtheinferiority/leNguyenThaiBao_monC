#include <iostream>
#include <string>

struct CustomerAccount {
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string telephoneNumber;
    double accountBalance;
    std::string dateOfLastPayment;
};

void displayMenu() {
    std::cout << "1. Enter data\n2. Change data\n3. Display data\n4. Search\n5. Quit\nEnter your choice: ";
}

void enterData(CustomerAccount& account) {
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, account.name);
    std::cout << "Address: ";
    std::getline(std::cin, account.address);
    std::cout << "City, State, and ZIP: ";
    std::getline(std::cin, account.cityStateZip);
    std::cout << "Telephone Number: ";
    std::getline(std::cin, account.telephoneNumber);
    do {
        std::cout << "Account Balance: ";
        std::cin >> account.accountBalance;
    } while (account.accountBalance < 0);
    std::cout << "Date of Last Payment: ";
    std::cin.ignore();
    std::getline(std::cin, account.dateOfLastPayment);
}

void changeData(CustomerAccount& account) {
    int choice;
    std::cout << "1. Name\n2. Address\n3. City, State, and ZIP\n4. Telephone Number\n5. Account Balance\n6. Date of Last Payment\nEnter the field you want to change: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << "Name: ";
            std::cin.ignore();
            std::getline(std::cin, account.name);
            break;
        case 2:
            std::cout << "Address: ";
            std::cin.ignore();
            std::getline(std::cin, account.address);
            break;
        case 3:
            std::cout << "City, State, and ZIP: ";
            std::cin.ignore();
            std::getline(std::cin, account.cityStateZip);
            break;
        case 4:
            std::cout << "Telephone Number: ";
            std::cin.ignore();
            std::getline(std::cin, account.telephoneNumber);
            break;
        case 5:
            do {
                std::cout << "Account Balance: ";
                std::cin >> account.accountBalance;
            } while (account.accountBalance < 0);
            break;
        case 6:
            std::cout << "Date of Last Payment: ";
            std::cin.ignore();
            std::getline(std::cin, account.dateOfLastPayment);
            break;
    }
}

void displayData(const CustomerAccount& account) {
    std::cout << "Name: " << account.name << std::endl;
    std::cout << "Address: " << account.address << std::endl;
    std::cout << "City, State, and ZIP: " << account.cityStateZip << std::endl;
    std::cout << "Telephone Number: " << account.telephoneNumber << std::endl;
    std::cout << "Account Balance: " << account.accountBalance << std::endl;
    std::cout << "Date of Last Payment: " << account.dateOfLastPayment << std::endl;
}

void searchData(CustomerAccount accounts[], const std::string& name) {
    bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (accounts[i].name.find(name) != std::string::npos) {
            std::cout << "Data for account " << (i + 1) << ":" << std::endl;
            displayData(accounts[i]);
            std::cout << std::endl;
            found = true;
        }
    }
    if (!found) {
        std::cout << "No account matches the name " << name << "." << std::endl;
    }
}

int main() {
    CustomerAccount accounts[10];
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 10; ++i) {
                    std::cout << "Enter data for account " << (i + 1) << ":" << std::endl;
                    enterData(accounts[i]);
                }
                break;
            case 2:
                int accountNumber;
                std::cout << "Enter the account number (1-10) you want to change: ";
                std::cin >> accountNumber;
                changeData(accounts[accountNumber - 1]);
                break;
            case 3:
                for (int i = 0; i < 10; ++i) {
                    std::cout << "Data for account " << (i + 1) << ":" << std::endl;
                    displayData(accounts[i]);
                    std::cout << std::endl;
                }
                break;
            case 4:
                std::string name;
                std::cout << "Enter the name you want to search for: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                searchData(accounts, name);
                break;
            case 5:
                std::cout << "Quitting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter again." << std::endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
