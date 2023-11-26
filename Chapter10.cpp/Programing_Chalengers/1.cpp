#include <iostream>

int stringLength(char* str) {
    int length = 0;
    while(*(str + length) != '\0') {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    int length = stringLength(str);
    std::cout << "The string has " << length << " characters.";
    return 0;
}
