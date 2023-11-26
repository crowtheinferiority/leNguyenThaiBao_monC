#include <iostream>
#include <map>

int main() {
    std::map<int, double> gases = {{1, 258.0}, {2, 331.5}, {3, 972.0}, {4, 1270.0}};
    int choice;
    double time;

    std::cout << "Select a gas:\n";
    std::cout << "1. Carbon Dioxide\n";
    std::cout << "2. Air\n";
    std::cout << "3. Helium\n";
    std::cout << "4. Hydrogen\n";
    std::cin >> choice;

    if (gases.find(choice) == gases.end()) {
        std::cout << "Invalid choice!\n";
        return 1;
    }

    std::cout << "Enter the time it took for the sound to travel (in seconds):\n";
    std::cin >> time;

    if (time < 0 || time > 30) {
        std::cout << "Invalid time!\n";
        return 1;
    }

    double distance = gases[choice] * time;
    std::cout << "The source of the sound was " << distance << " meters away from the detection location.\n";

    return 0;
}
