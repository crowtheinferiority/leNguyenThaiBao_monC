#include <iostream>
using namespace std;

int main() {
    int startingPopulation, numDays;
    double dailyIncrease;

    // Get user input for starting population
    cout << "Enter the starting number of organisms (must be 2 or more): ";
    cin >> startingPopulation;

    if (startingPopulation < 2) {
        cout << "Invalid input. Starting population must be 2 or more." << endl;
        return 1;
    }

    // Get user input for daily population increase (as a percentage)
    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIncrease;

    if (dailyIncrease < 0) {
        cout << "Invalid input. Daily increase cannot be negative." << endl;
        return 1;
    }

    // Get user input for the number of days
    cout << "Enter the number of days they will multiply (must be 1 or more): ";
    cin >> numDays;

    if (numDays < 1) {
        cout << "Invalid input. Number of days must be 1 or more." << endl;
        return 1;
    }

    // Predict and display the population for each day
    cout << "Day\tPopulation" << endl;
    cout << "----------------" << endl;

    double population = startingPopulation;
    for (int day = 1; day <= numDays; day++) {
        cout << day << "\t" << population << endl;
        population += (population * dailyIncrease / 100);
    }

    return 0;
}
