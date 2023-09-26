#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("People.txt"); // Open the file
    if (!inputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    int year = 1900; // Starting year
    string population;

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    while (getline(inputFile, population)) {
        int count = stoi(population) / 1000; // Calculate the number of asterisks

        // Display the year and the corresponding number of asterisks
        cout << year << " ";
        for (int i = 0; i < count; i++) {
            cout << "*";
        }
        cout << endl;

        year += 20; // Move to the next year
    }

    inputFile.close(); // Close the file

    return 0;
}
