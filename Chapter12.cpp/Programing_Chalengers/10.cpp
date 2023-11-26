#include <iostream>
#include <fstream>

void decryptFile(const std::string &inputFileName, const std::string &outputFileName) {
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);

    if (inputFile.is_open() && outputFile.is_open()) {
        char ch;
        while (inputFile.get(ch)) {
            ch -= 10; // simple decryption by subtracting 10 from ASCII code of each character
            outputFile.put(ch);
        }
        inputFile.close();
        outputFile.close();
    } else {
        std::cout << "Unable to open file" << std::endl;
    }
}

int main() {
    std::string inputFileName;
    std::cout << "Enter the name of the input file: ";
    std::cin >> inputFileName;

    std::string outputFileName;
    std::cout << "Enter the name of the output file: ";
    std::cin >> outputFileName;

    decryptFile(inputFileName, outputFileName);

    return 0;
}
