#include <iostream>
#include <cstring>

int main() {
    char firstName[30], middleName[30], lastName[30];
    char fullName[90];

    std::cout << "Enter your first name: ";
    std::cin.getline(firstName, 30);

    std::cout << "Enter your middle name: ";
    std::cin.getline(middleName, 30);

    std::cout << "Enter your last name: ";
    std::cin.getline(lastName, 30);

    strcpy(fullName, lastName);
    strcat(fullName, ", ");
    strcat(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, middleName);

    std::cout << "Your name arranged is: " << fullName;

    return 0;
}
