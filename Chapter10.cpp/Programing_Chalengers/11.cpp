#include <iostream>
#include <cctype>

void upper(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
}

void lower(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

void reverse(char* str) {
    for(int i = 0; str[i] != '\0'; i++) {
        if(isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if(islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    
    reverse(str);
    std::cout << "After reversing case: " << str << std::endl;
    
    lower(str);
    std::cout << "After converting to lowercase: " << str << std::endl;
    
    upper(str);
    std::cout << "After converting to uppercase: " << str;

    return 0;
}
