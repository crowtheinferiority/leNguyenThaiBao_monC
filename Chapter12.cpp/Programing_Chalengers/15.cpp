#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

int main() {
    std::string fileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> fileName;

    std::ifstream inputFile(fileName);
    if (!inputFile) {
        std::cout << "Unable to open file for reading" << std::endl;
        return 1;
    }

    int totalWords = 0;
    int totalSentences = 0;

    std::string line;
    while (std::getline(inputFile, line)) {
        totalSentences++;
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            totalWords++;
        }
    }

    double averageWordsPerSentence = static_cast<double>(totalWords) / totalSentences;

    std::cout << "Average number of words per sentence: " << averageWordsPerSentence << "\n";

    inputFile.close();

    return 0;
}
