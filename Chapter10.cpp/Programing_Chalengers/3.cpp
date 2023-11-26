#include <iostream>
#include <string>
#include <sstream>

int countWords(std::string str) {
    std::istringstream iss(str);
    int count = 0;
    std::string word;
    while(iss >> word) {
        count++;
    }
    return count;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    int wordCount = countWords(str);
    std::cout << "The string contains " << wordCount << " words.";
    return 0;
}
