#include <iostream>
using namespace std;

int main() {
    double calories, fatGrams, fatCalories, percentage;

    cout << "Enter the number of calories: ";
    cin >> calories;

    cout << "Enter the number of fat grams: ";
    cin >> fatGrams;

    if (calories < 0 || fatGrams < 0) {
        cout << "Error: The number of calories and fat grams cannot be less than 0.";
        return 0;
    }

    fatCalories = fatGrams * 9;
    if (fatCalories > calories) {
        cout << "Error: The number of calories from fat cannot be greater than the total number of calories.";
        return 0;
    }

    percentage = (fatCalories / calories) * 100;

    cout << "The percentage of calories that come from fat is " << percentage << "%.";

    if (percentage < 30) {
        cout << " The food is low in fat.";
    }

    return 0;
}