#include <iostream>
#include <string>

struct Drink {
    std::string name;
    double cost;
    int numberInMachine;
};

int main() {
    Drink drinks[5] = {{"Cola", 0.75, 20}, {"Root Beer", 0.75, 20}, {"Lemon-Lime", 0.75, 20}, {"Grape Soda", 0.80, 20}, {"Cream Soda", 0.80, 20}};
    double totalEarnings = 0;

    while (true) {
        std::cout << "\nDrinks available:\n";
        for (int i = 0; i < 5; ++i) {
            std::cout << i + 1 << ". " << drinks[i].name << " ($" << drinks[i].cost << ", " << drinks[i].numberInMachine << " in machine)\n";
        }
        std::cout << "6. Quit\n";

        int choice;
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        if (choice == 6) {
            break;
        } else if (choice < 1 || choice > 5) {
            std::cout << "Invalid choice. Please enter again.\n";
            continue;
        }

        if (drinks[choice - 1].numberInMachine == 0) {
            std::cout << "The selected drink has sold out.\n";
            continue;
        }

        double money;
        do {
            std::cout << "Enter the amount of money to be inserted into the machine: ";
            std::cin >> money;
        } while (money < 0 || money > 1);

        if (money < drinks[choice - 1].cost) {
            std::cout << "Not enough money inserted. Please enter again.\n";
            continue;
        }

        std::cout << "Change returned: $" << money - drinks[choice - 1].cost << "\n";
        --drinks[choice - 1].numberInMachine;
        totalEarnings += drinks[choice - 1].cost;
    }

    std::cout << "\nTotal earnings: $" << totalEarnings << "\n";

    return 0;
}
