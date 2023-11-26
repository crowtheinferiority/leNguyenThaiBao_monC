#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double weight, height, bmi;

    cout << "Enter your weight in pounds: ";
    cin >> weight;

    cout << "Enter your height in inches: ";
    cin >> height;

    bmi = weight * 703 / pow(height, 2);

    cout << "Your BMI is " << bmi << ".";

    if (bmi < 18.5) {
        cout << " You are underweight.";
    } else if (bmi > 25) {
        cout << " You are overweight.";
    } else {
        cout << " Your weight is optimal.";
    }

    return 0;
}
