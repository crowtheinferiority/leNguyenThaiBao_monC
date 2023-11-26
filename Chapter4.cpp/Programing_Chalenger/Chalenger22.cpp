#include <iostream>
#include <map>
#include <vector>

struct Substance {
    std::string name;
    double freezing_point;
    double boiling_point;
};

int main() {
    std::vector<Substance> substances = {
        {"Ethyl alcohol", -173, 172},
        {"Mercury", -38, 676},
        {"Oxygen", -362, -306},
        {"Water", 32, 212}
    };

    double temperature;
    std::cout << "Enter a temperature (in °F):\n";
    std::cin >> temperature;

    for (const auto& substance : substances) {
        if (temperature <= substance.freezing_point) {
            std::cout << substance.name << " will freeze at this temperature.\n";
        }
        if (temperature >= substance.boiling_point) {
            std::cout << substance.name << " will boil at this temperature.\n";
        }
    }

    return 0;
}
