#include <iostream>

class Population {
private:
    int population;
    int births;
    int deaths;

public:
    Population(int p, int b, int d)
        : population(p), births(b), deaths(d) {}

    double getBirthRate() const { return static_cast<double>(births) / population; }
    double getDeathRate() const { return static_cast<double>(deaths) / population; }
};

int main() {
    int population, births, deaths;
    std::cout << "Enter the population: ";
    std::cin >> population;
    std::cout << "Enter the number of births: ";
    std::cin >> births;
    std::cout << "Enter the number of deaths: ";
    std::cin >> deaths;

    Population pop(population, births, deaths);

    std::cout << "Birth rate: " << pop.getBirthRate() << "\n";
    std::cout << "Death rate: " << pop.getDeathRate() << "\n";

    return 0;
}
