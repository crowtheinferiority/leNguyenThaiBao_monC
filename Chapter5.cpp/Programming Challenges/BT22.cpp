#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask the user for the size of the square
    cout << "Enter a positive integer (up to 15): ";
    cin >> size;

    // Check if the size is within the valid range
    if (size < 1 || size > 15) {
        cout << "Invalid input. Please enter a positive integer between 1 and 15." << endl;
        return 1; // Exit the program with an error code
    }

    // Display the square
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}
