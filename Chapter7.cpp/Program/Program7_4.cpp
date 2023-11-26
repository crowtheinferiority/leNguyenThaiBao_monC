#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10; // Array size
    int numbers[ARRAY_SIZE];   // Array with 10 elements

    // Store values in the array.
    for (int count = 0; count < ARRAY_SIZE; count++) {
        numbers[count] = count;
    }

    ofstream outputFile("SavedNumbers.txt"); // Open a file for output

    // Check if the file opened successfully
    if (!outputFile.is_open()) {
        cout << "Error opening the file." << endl;
        return 1; // Return an error code
    }

    // Write the array contents to the file.
    for (int count = 0; count < ARRAY_SIZE; count++) {
        outputFile << numbers[count] << endl;
    }

    outputFile.close(); // Close the file

    cout << "The numbers were saved to the file." << endl;
    return 0;
}
