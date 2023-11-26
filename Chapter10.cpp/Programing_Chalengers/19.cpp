#include <iostream>
#include <iomanip>
#include <string>

std::string numberToWords(int num) {
    if(num == 0) {
        return "zero";
    }

    std::string words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                           "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                           "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty",
                           "fifty", "sixty", "seventy", "eighty", "ninety"};
    std::string result;

    if(num >= 1000) {
        result += words[num / 1000] + " thousand ";
        num %= 1000;
    }
    if(num >= 100) {
        result += words[num / 100] + " hundred ";
        num %= 100;
    }
    if(num >= 20) {
        result += words[18 + num / 10] + " ";
        num %= 10;
    }
    if(num > 0) {
        result += words[num];
    }

    return result;
}

int main() {
    std::string date, payee;
    double amount;

    std::cout << "Enter the date: ";
    std::getline(std::cin, date);
    
    std::cout << "Enter the payee's name: ";
    std::getline(std::cin, payee);
    
    do {
        std::cout << "Enter the amount of the check (up to $10,000): ";
        std::cin >> amount;
        if(amount < 0 || amount > 10000) {
            std::cout << "\nInvalid input. Please enter a value between 0 and 10,000.\n";
        }
    } while(amount < 0 || amount > 10000);

    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    std::cout << "\nDate: " << date << "\n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pay to the Order of: " << payee << ", $" << amount << "\n";
    std::cout << numberToWords(dollars) << (dollars == 1 ? "" : "") << (cents > 0 ? (" and ") : "");
    
    if(cents > 0) {
        std::cout << numberToWords(cents) << (cents == 1 ? "" : "") << "\n";
    }

    return 0;
}
