#include <iostream>

void printNumberInEnglish(int number) {
    // Mảng chứa các chuỗi đọc số từ 0 đến 19
    const char* below_20[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", 
                              "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    
    // Mảng chứa các chuỗi đọc số hàng chục từ 20 đến 90
    const char* tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    // In ra số từ 0 đến 99
    if (number < 20) {
        std::cout << below_20[number];
    } else {
        std::cout << tens[number / 10];
        if (number % 10 != 0) {
            std::cout << " " << below_20[number % 10];
        }
    }
}

int main() {
    int number;

    // Nhập số từ người dùng
    std::cout << "Nhap mot so: ";
    std::cin >> number;

    // In ra chữ viết của số
    if (number < 0 || number > 99) {
        std::cout << "So nam ngoai pham vi chuong trinh." << std::endl;
    } else {
        std::cout << "Chu viet cua so" << number << " la: ";
        printNumberInEnglish(number);
        std::cout << std::endl;
    }

    return 0;
}
