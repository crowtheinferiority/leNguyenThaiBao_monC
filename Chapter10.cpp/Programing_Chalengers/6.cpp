#include <iostream>
#include <cctype>

int countVowels(char* str) {
    int count = 0;
    for(int i = 0; *(str + i) != '\0'; i++) {
        char c = tolower(*(str + i));
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}

int countConsonants(char* str) {
    int count = 0;
    for(int i = 0; *(str + i) != '\0'; i++) {
        char c = tolower(*(str + i));
        if(isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    
    char choice;
    do {
        std::cout << "\nA) Count the number of vowels in the string\n";
        std::cout << "B) Count the number of consonants in the string\n";
        std::cout << "C) Count both the vowels and consonants in the string\n";
        std::cout << "D) Enter another string\n";
        std::cout << "E) Exit the program\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        
        switch(toupper(choice)) {
            case 'A':
                std::cout << "The string contains " << countVowels(str) << " vowels.\n";
                break;
            case 'B':
                std::cout << "The string contains " << countConsonants(str) << " consonants.\n";
                break;
            case 'C':
                std::cout << "The string contains " << countVowels(str) << " vowels and ";
                std::cout << countConsonants(str) << " consonants.\n";
                break;
            case 'D':
                std::cin.ignore();
                std::cout << "Enter a string: ";
                std::cin.getline(str, 100);
                break;
            case 'E':
                break;
            default:
                std::cout << "Invalid choice.\n";
        }
    } while(toupper(choice) != 'E');

    return 0;
}
