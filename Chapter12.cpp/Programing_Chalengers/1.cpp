#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName;
    std::cout << "Enter the name of the file: ";
    std::cin >> fileName;

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string line;
        int lineCount = 0;
        while (std::getline(file, line) && lineCount < 10) {
            std::cout << line << std::endl;
            lineCount++;
        }
        if (lineCount < 10) {
            std::cout << "The entire file has been displayed." << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
