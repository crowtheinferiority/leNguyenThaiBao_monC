#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::string inputFileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> inputFileName;

    std::string outputFileName;
    std::cout << "Enter the name of the output file: ";
    std::cin >> outputFileName;

    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    if (inputFile.is_open() && outputFile.is_open()) {
        char ch;
        bool newSentence = true;
        while (inputFile.get(ch)) {
            if (newSentence && isalpha(ch)) {
                ch = toupper(ch);
                newSentence = false;
            } else if (ch == '.') {
                newSentence = true;
            } else if (isalpha(ch)) {
                ch = tolower(ch);
            }
            outputFile.put(ch);
        }
        inputFile.close();
        outputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }

    return 0;
}
