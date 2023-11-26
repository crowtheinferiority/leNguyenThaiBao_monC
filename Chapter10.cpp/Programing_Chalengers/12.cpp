#include <iostream>
#include <cctype>

bool isValidPassword(char* password) {
    bool hasUpper = false, hasLower = false, hasDigit = false;
    int length = 0;
    for(int i = 0; password[i] != '\0'; i++) {
        if(isupper(password[i])) {
            hasUpper = true;
        } else if(islower(password[i])) {
            hasLower = true;
        } else if(isdigit(password[i])) {
            hasDigit = true;
        }
        length++;
    }
    return length >= 6 && hasUpper && hasLower && hasDigit;
}

int main() {
    char password[100];
    std::cout << "Enter a password: ";
    std::cin.getline(password, 100);
    
    if(isValidPassword(password)) {
        std::cout << "The password is valid.";
    } else {
        std::cout << "The password is invalid. It should meet the following criteria:\n";
        std::cout << "- At least six characters long\n";
        std::cout << "- Contains at least one uppercase and at least one lowercase letter\n";
        std::cout << "- Has at least one digit\n";
    }

    return 0;
}
