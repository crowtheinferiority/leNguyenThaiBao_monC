#include <iostream>

// Function to calculate total charges for in-patient
double calculateCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    return days * dailyRate + medicationCharges + serviceCharges;
}

// Function to calculate total charges for out-patient
double calculateCharges(double medicationCharges, double serviceCharges) {
    return medicationCharges + serviceCharges;
}

int main() {
    char patientType;
    std::cout << "Enter 'I' for in-patient or 'O' for out-patient: ";
    std::cin >> patientType;

    double totalCharges;
    if (patientType == 'I' || patientType == 'i') {
        int days;
        double dailyRate, medicationCharges, serviceCharges;

        std::cout << "Enter the number of days spent in the hospital: ";
        std::cin >> days;

        std::cout << "Enter the daily rate: ";
        std::cin >> dailyRate;

        std::cout << "Enter the hospital medication charges: ";
        std::cin >> medicationCharges;

        std::cout << "Enter the charges for hospital services: ";
        std::cin >> serviceCharges;

        totalCharges = calculateCharges(days, dailyRate, medicationCharges, serviceCharges);
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCharges, serviceCharges;

        std::cout << "Enter the hospital medication charges: ";
        std::cin >> medicationCharges;

        std::cout << "Enter the charges for hospital services: ";
        std::cin >> serviceCharges;

        totalCharges = calculateCharges(medicationCharges, serviceCharges);
    } else {
        std::cout << "Invalid patient type." << std::endl;
        return 1;
    }

    std::cout << "The total charges are: $" << totalCharges << std::endl;

    return 0;
}
