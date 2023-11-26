#include <iostream>

class PayRoll {
private:
    double hourlyRate;
    int hoursWorked;

public:
    PayRoll(double rate) : hourlyRate(rate), hoursWorked(0) {}

    void setHoursWorked(int hours) {
        if (hours >= 0 && hours <= 60) {
            hoursWorked = hours;
        }
    }

    double getTotalPay() const {
        return hourlyRate * hoursWorked;
    }
};

int main() {
    const int NUM_EMPLOYEES = 7;
    PayRoll employees[NUM_EMPLOYEES] = { PayRoll(15.0), PayRoll(15.0), PayRoll(15.0), PayRoll(15.0),
                                          PayRoll(15.0), PayRoll(15.0), PayRoll(15.0) };

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        int hours;
        std::cout << "Enter the number of hours employee " << (i + 1) << " has worked: ";
        std::cin >> hours;
        employees[i].setHoursWorked(hours);
    }

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        std::cout << "Employee " << (i + 1) << " earned: $" << employees[i].getTotalPay() << "\n";
    }

    return 0;
}
