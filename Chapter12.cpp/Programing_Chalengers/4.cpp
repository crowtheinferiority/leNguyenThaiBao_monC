#include <iostream>
#include <fstream>
#include <string>
#include <deque>

int main() {
    std::string fileName;
    std::cout << "Enter the name of the file: ";
    std::cin >> fileName;

    std::ifstream file(fileName);
    if (file.is_open()) {
        std::string line;
        std::deque<std::string> lines;
        while (std::getline(file, line)) {
            lines.push_back(line);
            if (lines.size() > 10) {
                lines.pop_front();
            }
        }
        if (lines.size() < 10) {
            std::cout << "The entire file has been displayed." << std::endl;
        }
        for (const auto &line : lines) {
            std::cout << line << std::endl;
        }
        file.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
