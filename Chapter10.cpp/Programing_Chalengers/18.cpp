#include <iostream>
#include <string>

int main() {
    std::string phoneNumbers[11] = {
        "Alejandra Cruz, 555-1223",
        "Joe Looney, 555-0097",
        "Geri Palmer, 555-8787",
        "Li Chen, 555-1212",
        "Holly Gaddis, 555-8878",
        "Sam Wiggins, 555-0998",
        "Bob Kain, 555-8712",
        "Tim Haynes, 555-7676",
        "Warren Gaddis, 555-9037",
        "Jean James, 555-4939",
        "Ron Palmer, 555-2783"
    };

    std::string searchName;
    std::cout << "Enter a name or partial name to search for: ";
    std::getline(std::cin, searchName);

    std::cout << "\nMatching entries:\n";
    for(int i = 0; i < 11; i++) {
        if(phoneNumbers[i].find(searchName) != std::string::npos) {
            std::cout << phoneNumbers[i] << std::endl;
        }
    }

    return 0;
}
