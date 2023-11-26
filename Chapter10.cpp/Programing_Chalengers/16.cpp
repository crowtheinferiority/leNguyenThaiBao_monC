#include <iostream>
#include <sstream>

std::string convertToPigLatin(std::string word) {
    return word.substr(1) + word[0] + "AY";
}

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::istringstream iss(sentence);
    std::string word;
    while(iss >> word) {
        std::cout << convertToPigLatin(word) << " ";
    }

    return 0;
}
