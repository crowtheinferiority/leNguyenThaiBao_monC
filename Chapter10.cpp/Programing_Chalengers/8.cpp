#include <iostream>
#include <climits>

int main() {
    char str[100];
    std::cout << "Enter a series of single digit numbers with nothing separating them: ";
    std::cin.getline(str, 100);

    int sum = 0;
    int minDigit = INT_MAX;
    int maxDigit = INT_MIN;

    for(int i = 0; str[i] != '\0'; i++) {
        int digit = str[i] - '0';
        sum += digit;
        if(digit < minDigit) {
            minDigit = digit;
        }
        if(digit > maxDigit) {
            maxDigit = digit;
        }
    }

    std::cout << "The sum of the digits is " << sum << ".\n";
    std::cout << "The smallest digit is " << minDigit << ".\n";
    std::cout << "The largest digit is " << maxDigit << ".\n";

    return 0;
}
