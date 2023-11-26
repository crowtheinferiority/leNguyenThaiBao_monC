#include <iostream>
#include <string>

class PatientAccount {
    double charges;
    int days;
    static const double dailyRate;
public:
    PatientAccount(int d) : days(d), charges(d * dailyRate) {}
    void addCharges(double c) { charges += c; }
    double getCharges() { return charges; }
};

const double PatientAccount::dailyRate = 200.0;

class Surgery {
    static const double surgeryCharges[5];
public:
    static double getCharge(int type) { return surgeryCharges[type]; }
};

const double Surgery::surgeryCharges[5] = {500.0, 1000.0, 1500.0, 2000.0, 2500.0};

class Pharmacy {
    static const double medicationPrices[5];
public:
    static double getPrice(int type) { return medicationPrices[type]; }
};

const double Pharmacy::medicationPrices[5] = {10.0, 20.0, 30.0, 40.0, 50.0};

int main() {
    int days, surgeryType, medicationType;
    std::cout << "Enter number of days in hospital: ";
    std::cin >> days;
    PatientAccount patient(days);

    std::cout << "Enter surgery type (0-4): ";
    std::cin >> surgeryType;
    patient.addCharges(Surgery::getCharge(surgeryType));

    std::cout << "Enter medication type (0-4): ";
    std::cin >> medicationType;
    patient.addCharges(Pharmacy::getPrice(medicationType));

    std::cout << "Total charges: $" << patient.getCharges() << std::endl;

    return 0;
}
