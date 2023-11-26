#include <iostream>
#include <cmath>

int main() {
    double start_time, minutes;
    double rate;

    std::cout << "Enter the starting time of the call (in HH.MM format):\n";
    std::cin >> start_time;

    int hours = static_cast<int>(start_time);
    int mins = static_cast<int>((start_time - hours) * 100);

    if (hours < 0 || hours > 23 || mins < 0 || mins > 59) {
        std::cout << "Invalid time!\n";
        return 1;
    }

    if (hours >= 0 && hours < 7) {
        rate = 0.05;
    } else if (hours >= 7 && hours < 19) {
        rate = 0.45;
    } else {
        rate = 0.20;
    }

    std::cout << "Enter the number of minutes of the call:\n";
    std::cin >> minutes;

    if (minutes < 0) {
        std::cout << "Invalid number of minutes!\n";
        return 1;
    }

    double charges = rate * minutes;
    std::cout << "The charges for this call are $" << charges << ".\n";

    return 0;
}
