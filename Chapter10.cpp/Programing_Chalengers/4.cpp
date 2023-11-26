#include <iostream>
#include <cstring>

int countWords(char* str, int& totalLetters) {
    int count = 0;
    totalLetters = 0;
    char* token = strtok(str, " ");
    while(token != NULL) {
        count++;
        totalLetters += strlen(token);
        token = strtok(NULL, " ");
    }
    return count;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int totalLetters;
    int wordCount = countWords(str, totalLetters);
    double averageLetters = static_cast<double>(totalLetters) / wordCount;
    std::cout << "The string contains " << wordCount << " words.\n";
    std::cout << "The average number of letters per word is " << averageLetters << ".";
    return 0;
}
