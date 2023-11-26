#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream file("text.txt");
    if(!file) {
        std::cout << "Error opening file.";
        return 1;
    }

    int upperCount = 0, lowerCount = 0, digitCount = 0;
    char ch;
    while(file.get(ch)) {
        if(isupper(ch)) {
            upperCount++;
        } else if(islower(ch)) {
            lowerCount++;
        } else if(isdigit(ch)) {
            digitCount++;
        }
    }

    std::cout << "The number of uppercase letters in the file is " << upperCount << ".\n";
    std::cout << "The number of lowercase letters in the file is " << lowerCount << ".\n";
    std::cout << "The number of digits in the file is " << digitCount << ".\n";

    file.close();

    return 0;
}
