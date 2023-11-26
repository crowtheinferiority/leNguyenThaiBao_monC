#include <iostream>
#include <cstring>

char mostFrequentChar(char* str) {
    int count[256] = {0};
    int maxCount = 0;
    char maxChar = '\0';
    for(int i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
        if(count[(unsigned char)str[i]] > maxCount) {
            maxCount = count[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }
    return maxChar;
}

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin.getline(str, 100);
    char frequentChar = mostFrequentChar(str);
    std::cout << "The most frequent character is: " << frequentChar;
    return 0;
}
