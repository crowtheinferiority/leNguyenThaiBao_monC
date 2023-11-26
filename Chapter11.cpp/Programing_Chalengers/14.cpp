#include <iostream>
#include <string>

struct Bin {
    std::string partDescription;
    int numberOfParts;
};

void displayMenu() {
    std::cout << "1. Add parts\n2. Remove parts\n3. Display bins\n4. Quit\nEnter your choice: ";
}

void addParts(Bin& bin) {
    int parts;
    do {
        std::cout << "Enter the number of parts to add: ";
        std::cin >> parts;
    } while (parts < 0 || bin.numberOfParts + parts > 30);
    bin.numberOfParts += parts;
}

void removeParts(Bin& bin) {
    int parts;
    do {
        std::cout << "Enter the number of parts to remove: ";
        std::cin >> parts;
    } while (parts < 0 || bin.numberOfParts - parts < 0);
    bin.numberOfParts -= parts;
}

void displayBins(const Bin bins[]) {
    std::cout << "\nBins:\n";
    for (int i = 0; i < 10; ++i) {
        std::cout << i + 1 << ". " << bins[i].partDescription << " (" << bins[i].numberOfParts << " parts)\n";
    }
}

int main() {
    Bin bins[10] = {{"Valve", 10}, {"Bearing", 5}, {"Bushing", 15}, {"Coupling", 21}, {"Flange", 7}, {"Gear", 5}, {"Gear Housing", 5}, {"Vacuum Gripper", 25}, {"Cable", 18}, {"Rod", 12}};
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                int binNumberAdd;
                std::cout << "Enter the bin number (1-10) you want to add parts to: ";
                std::cin >> binNumberAdd;
                addParts(bins[binNumberAdd - 1]);
                break;
            case 2:
                int binNumberRemove;
                std::cout << "Enter the bin number (1-10) you want to remove parts from: ";
                std::cin >> binNumberRemove;
                removeParts(bins[binNumberRemove - 1]);
                break;
            case 3:
                displayBins(bins);
                break;
            case 4:
                std::cout << "Quitting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter again." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
