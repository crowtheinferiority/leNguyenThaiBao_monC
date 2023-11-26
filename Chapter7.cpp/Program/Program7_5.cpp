#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Constant for the array size
    int values[SIZE];   // An array of 5 integers
    int count;          // Loop counter variable

    // Store five numbers in the five-element array.
    for (count = 0; count < SIZE; count++) {
        values[count] = 100;
    }

    // Display the numbers.
    cout << "Here are the numbers:\n";
    for (count = 0; count < SIZE; count++) {
        cout << values[count] << endl;
    }

    return 0;
}
