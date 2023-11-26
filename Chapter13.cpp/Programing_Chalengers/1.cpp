#include <iostream>
#include <string>

class Date {
private:
    int month;
    int day;
    int year;
    std::string monthNames[12] = {"January", "February", "March", "April", "May", "June",
                                   "July", "August", "September", "October", "November", "December"};

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    void printFormat1() {
        std::cout << month << "/" << day << "/" << year << std::endl;
    }

    void printFormat2() {
        std::cout << monthNames[month - 1] << " " << day << ", " << year << std::endl;
    }

    void printFormat3() {
        std::cout << day << " " << monthNames[month - 1] << " " << year << std::endl;
    }
};

int main() {
    Date date(12, 25, 2014);
    date.printFormat1();
    date.printFormat2();
    date.printFormat3();

    return 0;
}
