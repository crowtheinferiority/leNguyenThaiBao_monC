#include <iostream>
#include <string>

struct HourlyPaid {
    double hoursWorked;
    double hourlyRate;
};

struct Salaried {
    double salary;
    double bonus;
};

union Payroll {
    HourlyPaid hourlyPaid;
    Salaried salaried;
};

int main() {
    Payroll payroll;
    int choice;

    std::cout << "1. Hourly paid worker\n2. Salaried worker\nEnter your choice: ";
    std::cin >> choice;

    if (choice == 1) {
        do {
            std::cout << "Enter the number of hours worked: ";
            std::cin >> payroll.hourlyPaid.hoursWorked;
        } while (payroll.hourlyPaid.hoursWorked < 0 || payroll.hourlyPaid.hoursWorked > 80);
        do {
            std::cout << "Enter the hourly rate: ";
            std::cin >> payroll.hourlyPaid.hourlyRate;
        } while (payroll.hourlyPaid.hourlyRate < 0);

        std::cout << "Pay: " << payroll.hourlyPaid.hoursWorked * payroll.hourlyPaid.hourlyRate << std::endl;
    } else if (choice == 2) {
        do {
            std::cout << "Enter the salary: ";
            std::cin >> payroll.salaried.salary;
        } while (payroll.salaried.salary < 0);
        do {
            std::cout << "Enter the bonus: ";
            std::cin >> payroll.salaried.bonus;
        } while (payroll.salaried.bonus < 0);

        std::cout << "Pay: " << payroll.salaried.salary + payroll.salaried.bonus << std::endl;
    } else {
        std::cout << "Invalid choice." << std::endl;
    }

    return 0;
}
