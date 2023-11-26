#include <iostream>

// Function to calculate the size of the population for a year
int calculatePopulation(int P, double B, double D, int arrivals, int departures) {
    return P + B * P - D * P + arrivals - departures;
}

int main() {
    int P, N, years, arrivals, departures;
    double B, D;

    do {
        std::cout << "Enter the starting size of a population: ";
        std::cin >> P;
        if (P < 2) {
            std::cout << "Invalid number. Please enter a number greater than 1." << std::endl;
        }
    } while (P < 2);

    do {
        std::cout << "Enter the annual birth rate (in decimal form): ";
        std::cin >> B;
        if (B < 0) {
            std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
        }
    } while (B < 0);

    do {
        std::cout << "Enter the annual death rate (in decimal form): ";
        std::cin >> D;
        if (D < 0) {
            std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
        }
    } while (D < 0);

    do {
        std::cout << "Enter the number of individuals who typically move into the area each year: ";
        std::cin >> arrivals;
        if (arrivals < 0) {
            std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
        }
    } while (arrivals < 0);

    do {
        std::cout << "Enter the number of individuals who typically leave the area each year: ";
        std::cin >> departures;
        if (departures < 0) {
            std::cout << "Invalid number. Please enter a non-negative number." << std::endl;
        }
    } while (departures < 0);

    do {
        std::cout << "Enter the number of years: ";
        std::cin >> years;
        if (years < 1) {
            std::cout << "Invalid number. Please enter a number greater than 0." << std::endl;
        }
    } while (years < 1);

    for (int i = 0; i < years; ++i) {
        N = calculatePopulation(P, B, D, arrivals, departures);
        std::cout << "The size of the population after year " << i + 1 << " is: " << N << std::endl;
        P = N;
    }

    return 0;
}
