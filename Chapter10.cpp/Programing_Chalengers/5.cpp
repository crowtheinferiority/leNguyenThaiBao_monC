#include <iostream>
#include <cctype>

void capitalizeSentences(char* str) {
    bool newSentence = true;
    for(int i = 0; *(str + i) != '\0'; i++) {
        if(newSentence && isalpha(*(str + i))) {
            *(str + i) = toupper(*(str + i));
            newSentence = false;
        } else if(*(str + i) == '.') {
            newSentence = true;
        }
    }
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    capitalizeSentences(str);
    std::cout << "The capitalized string is: " << str;
    return 0;
}
