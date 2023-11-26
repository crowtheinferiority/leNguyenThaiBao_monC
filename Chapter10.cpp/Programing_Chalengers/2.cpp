#include <iostream>

void printBackward(char* str) {
    int length = 0;
    while(*(str + length) != '\0') {
        length++;
    }
    for(int i = length - 1; i >= 0; i--) {
        std::cout << *(str + i);
    }
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    std::cout << "The string backward is: ";
    printBackward(str);
    return 0;
}
