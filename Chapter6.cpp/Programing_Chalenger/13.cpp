#include <iostream>
#include <vector>

// Function to get the number of employees
int getNumEmployees() {
    int numEmployees;
    do {
        std::cout << "Enter the number of employees in the company: ";
        std::cin >> numEmployees;
        if (numEmployees < 1) {
            std::cout << "Invalid number. Please enter a number greater than 0." << std::endl;
        }
    } while (numEmployees < 1);
    return numEmployees;
}

// Function to get the total number of days absent
int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;
    for (int i = 0; i < numEmployees; ++i) {
        int daysAbsent;
        do {
            std::cout << "Enter the number of days employee " << i + 1 << " was absent: ";
            std::cin >> daysAbsent;
            if (daysAbsent < 0) {
                std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
            }
        } while (daysAbsent < 0);
        totalDaysAbsent += daysAbsent;
    }
    return totalDaysAbsent;
}

// Function to calculate the average number of days absent
double calcAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}

int main() {
    int numEmployees = getNumEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calcAverageDaysAbsent(numEmployees, totalDaysAbsent);

    std::cout << "The average number of days absent is: " << averageDaysAbsent << std::endl;

    return 0;
}
