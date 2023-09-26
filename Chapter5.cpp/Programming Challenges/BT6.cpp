#include <iostream>

using namespace std;

int main() {
    int speed, time;

    // Input the speed (in mph)
    cout << "Enter the speed of the vehicle (mph): ";
    cin >> speed;

    // Check if speed is negative
    if (speed < 0) {
        cout << "Speed cannot be a negative number. Please try again.\n";
        return 1; // Terminate the program with error code 1
    }

    // Input the time traveled (in hours)
    cout << "Enter the number of hours traveled: ";
    cin >> time;

    // Check if time traveled is less than or equal to 0
    if (time <= 0) {
        cout << "Time traveled must be greater than 0. Please try again.\n";
        return 1; // Terminate the program with error code 1
    }

    // Display the table header
    cout << "Hour  Distance Traveled\n";
    cout << "----------------------\n";

    // Use a loop to calculate and display distance traveled for each hour
    for (int hour = 1; hour <= time; hour++) {
        int distance = speed * hour;
        cout << hour << "     " << distance << endl;
    }

    return 0; // Terminate the program successfully
}
