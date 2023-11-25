// This program calculates the area of a rectangle. It asks the user to enter the length and width of the rectangle.
#include <iostream>
using namespace std;

int main() {
    int length, width, area; // Declare integer variables for length, width, and area.

    cout << "This program calculates the area of a rectangle.\n";
    cout << "Enter the length and width of the rectangle separated by a space.\n"; // Prompt the user to enter values.
    cin >> length >> width; // Read the length and width from the user.
    
    area = length * width; // Calculate the area of the rectangle.
    cout << "The area of the rectangle is " << area << endl; // Display the result.

    return 0;
}
