#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Ask the user for the number of students
    cout << "Enter the number of students in the class (1-25): ";
    cin >> numStudents;

    // Input validation
    if (numStudents < 1 || numStudents > 25) {
        cout << "Invalid number of students. Please enter a number between 1 and 25." << endl;
        return 1;
    }

    cin.ignore(); // Clear the newline character from the buffer

    string firstName, firstInLine, lastInLine;

    // Initialize the first and last in line with the first entered name
    cout << "Enter the name of student 1: ";
    getline(cin, firstInLine);
    lastInLine = firstInLine;

    for (int i = 2; i <= numStudents; i++) {
        cout << "Enter the name of student " << i << ": ";
        getline(cin, firstName);

        // Check if the new name comes before the first in line
        if (firstName < firstInLine) {
            firstInLine = firstName;
        }
        
        // Check if the new name comes after the last in line
        if (firstName > lastInLine) {
            lastInLine = firstName;
        }
    }

    cout << "Student at the front of the line: " << firstInLine << endl;
    cout << "Student at the end of the line: " << lastInLine << endl;

    return 0;
}
