#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string fileName;
    std::cout << "Enter the name of the file: ";
    std::cin >> fileName;

    std::string searchString;
    std::cout << "Enter the string to search for: ";
    std::cin >> searchString;

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string line;
        int lineCount = 0;
        int occurrenceCount = 0;
        while (std::getline(file, line)) {
            lineCount++;
            if (line.find(searchString) != std::string::npos) {
                std::cout << "Line " << lineCount << ": " << line << std::endl;
                occurrenceCount++;
            }
        }
        std::cout << "The string \"" << searchString << "\" appeared " << occurrenceCount << " times in the file." << std::endl;
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
