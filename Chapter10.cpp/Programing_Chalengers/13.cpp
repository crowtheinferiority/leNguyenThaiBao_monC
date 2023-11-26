#include <iostream>
#include <string>

int main() {
    std::string date;
    std::cout << "Enter a date (mm/dd/yyyy): ";
    std::getline(std::cin, date);

    std::string monthNames[12] = {"January", "February", "March", "April", "May", "June",
                                   "July", "August", "September", "October", "November", "December"};

    int month = std::stoi(date.substr(0, 2));
    std::string day = date.substr(3, 2);
    std::string year = date.substr(6, 4);

    std::cout << monthNames[month - 1] << " " << day << ", " << year;

    return 0;
}
