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
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
            lineCount++;
            if (lineCount % 24 == 0) {
                std::cout << "Press any key to continue...";
                std::cin.ignore();
                std::cin.get();
            }
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
