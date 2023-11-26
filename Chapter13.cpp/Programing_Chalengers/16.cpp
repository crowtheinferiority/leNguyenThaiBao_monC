#include <iostream>

class Temperature {
    double temperature;
public:
    Temperature(double temp) : temperature(temp) {}

    bool isEthylFreezing() { return temperature <= -173; }
    bool isEthylBoiling() { return temperature >= 172; }
    bool isOxygenFreezing() { return temperature <= -362; }
    bool isOxygenBoiling() { return temperature >= -306; }
    bool isWaterFreezing() { return temperature <= 32; }
    bool isWaterBoiling() { return temperature >= 212; }
};

int main() {
    double temp;
    std::cout << "Enter a temperature: ";
    std::cin >> temp;

    Temperature t(temp);

    std::cout << "At this temperature:\n";
    if (t.isEthylFreezing()) std::cout << "Ethyl Alcohol will freeze.\n";
    if (t.isEthylBoiling()) std::cout << "Ethyl Alcohol will boil.\n";
    if (t.isOxygenFreezing()) std::cout << "Oxygen will freeze.\n";
    if (t.isOxygenBoiling()) std::cout << "Oxygen will boil.\n";
    if (t.isWaterFreezing()) std::cout << "Water will freeze.\n";
    if (t.isWaterBoiling()) std::cout << "Water will boil.\n";

    return 0;
}
