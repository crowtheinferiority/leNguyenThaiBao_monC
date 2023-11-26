#include <iostream>
#include <string>
#include <cctype>

std::string separateWords(std::string str) {
    std::string result;
    result += str[0];
    for(int i = 1; i < str.length(); i++) {
        if(isupper(str[i])) {
            result += ' ';
            result += tolower(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::string str;
    std::cout << "Enter a sentence with all words run together and the first character of each word is uppercase: ";
    std::getline(std::cin, str);
    std::string newStr = separateWords(str);
    std::cout << "The sentence with separated words is: " << newStr;
    return 0;
}
