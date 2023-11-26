#include <iostream>

using namespace std;

int main() {
    const double caloriesPerMinute = 3.6;
    int minutes[] = {5, 10, 15, 20, 25, 30};

    cout << "Minutes\tCalories Burned" << endl;
    cout << "-----------------------" << endl;

    for (int i = 0; i < 6; i++) {
        int minutesRun = minutes[i];
        double caloriesBurned = minutesRun * caloriesPerMinute;
        cout << minutesRun << "\t" << caloriesBurned << endl;
    }

    return 0;
}
