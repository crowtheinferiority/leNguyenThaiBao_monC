#include <iostream>
#include <string>

struct Speaker {
    std::string name;
    std::string telephoneNumber;
    std::string speakingTopic;
    double feeRequired;
};

void displayMenu() {
    std::cout << "1. Enter data\n2. Change data\n3. Display data\n4. Quit\nEnter your choice: ";
}

void enterData(Speaker& speaker) {
    std::cout << "Name: ";
    std::cin.ignore();
    std::getline(std::cin, speaker.name);
    std::cout << "Telephone Number: ";
    std::getline(std::cin, speaker.telephoneNumber);
    std::cout << "Speaking Topic: ";
    std::getline(std::cin, speaker.speakingTopic);
    do {
        std::cout << "Fee Required: ";
        std::cin >> speaker.feeRequired;
    } while (speaker.feeRequired < 0);
}

void changeData(Speaker& speaker) {
    int choice;
    std::cout << "1. Name\n2. Telephone Number\n3. Speaking Topic\n4. Fee Required\nEnter the field you want to change: ";
    std::cin >> choice;
    switch (choice) {
        case 1:
            std::cout << "Name: ";
            std::cin.ignore();
            std::getline(std::cin, speaker.name);
            break;
        case 2:
            std::cout << "Telephone Number: ";
            std::cin.ignore();
            std::getline(std::cin, speaker.telephoneNumber);
            break;
        case 3:
            std::cout << "Speaking Topic: ";
            std::cin.ignore();
            std::getline(std::cin, speaker.speakingTopic);
            break;
        case 4:
            do {
                std::cout << "Fee Required: ";
                std::cin >> speaker.feeRequired;
            } while (speaker.feeRequired < 0);
            break;
    }
}

void displayData(const Speaker& speaker) {
    std::cout << "Name: " << speaker.name << std::endl;
    std::cout << "Telephone Number: " << speaker.telephoneNumber << std::endl;
    std::cout << "Speaking Topic: " << speaker.speakingTopic << std::endl;
    std::cout << "Fee Required: " << speaker.feeRequired << std::endl;
}

int main() {
    Speaker speakers[10];
    int choice;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                for (int i = 0; i < 10; ++i) {
                    std::cout << "Enter data for speaker " << (i + 1) << ":" << std::endl;
                    enterData(speakers[i]);
                }
                break;
            case 2:
                int speakerNumber;
                std::cout << "Enter the speaker number (1-10) you want to change: ";
                std::cin >> speakerNumber;
                changeData(speakers[speakerNumber - 1]);
                break;
            case 3:
                for (int i = 0; i < 10; ++i) {
                    std::cout << "Data for speaker " << (i + 1) << ":" << std::endl;
                    displayData(speakers[i]);
                    std::cout << std::endl;
                }
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
