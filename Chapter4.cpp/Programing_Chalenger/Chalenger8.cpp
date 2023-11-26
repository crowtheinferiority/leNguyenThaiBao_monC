#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> color1;

    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> color2;

    if (color1 == "red" && color2 == "blue" || color1 == "blue" && color2 == "red") {
        cout << "The secondary color is purple.";
    } else if (color1 == "red" && color2 == "yellow" || color1 == "yellow" && color2 == "red") {
        cout << "The secondary color is orange.";
    } else if (color1 == "blue" && color2 == "yellow" || color1 == "yellow" && color2 == "blue") {
        cout << "The secondary color is green.";
    } else {
        cout << "Error: Please enter two primary colors (red, blue, or yellow).";
    }

    return 0;
}
