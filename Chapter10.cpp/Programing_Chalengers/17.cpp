#include <iostream>
#include <string>

int main() {
    std::string phoneNumbers[10] = {
        "Alejandra Cruz, 555-1223",
        "Joe Looney, 555-0097",
        "Geri Palmer, 555-8787",
        "Li Chen, 555-1212",
        "Holly Gaddis, 555-8878",
        "Sam Wiggins, 555-0998",
        "Bob Kain, 555-8712",
        "Tim Haynes, 555-7676",
        "Warren Gaddis, 555-9037",
        "Jean James, 555-4939"
    };

    std::cout << "Phone numbers:\n";
    for(int i = 0; i < 10; i++) {
        std::cout << phoneNumbers[i] << std::endl;
    }

    return 0;
}
