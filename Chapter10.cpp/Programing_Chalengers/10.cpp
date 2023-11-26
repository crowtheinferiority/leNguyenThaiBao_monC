#include <iostream>
#include <string>

std::string replaceSubstring(std::string str, std::string substr, std::string newSubstr) {
    size_t pos = str.find(substr);
    while(pos != std::string::npos) {
        str.replace(pos, substr.length(), newSubstr);
        pos = str.find(substr, pos + newSubstr.length());
    }
    return str;
}

int main() {
    std::string str, substr, newSubstr;
    std::cout << "Enter a string: ";
    getline(std::cin, str);
    std::cout << "Enter the substring to replace: ";
    getline(std::cin, substr);
    std::cout << "Enter the new substring: ";
    getline(std::cin, newSubstr);
    std::string newStr = replaceSubstring(str, substr, newSubstr);
    std::cout << "The new string is: " << newStr;
    return 0;
}
