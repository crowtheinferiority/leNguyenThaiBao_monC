#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string city;

    // Prompt the user to enter their name
    cout << "Please enter your name: ";

    // Use cin to read the input into the 'name' string
    cin >> name;

    // Prompt the user to enter the city they live in
    cout << "Enter the city you live in: ";

    // Use cin to read the input into the 'city' string
    cin >> city;

    // Display a greeting using the entered name
    cout << "Hello, " << name << endl;

    // Display the city entered by the user
    cout << "You live in " << city << endl;

    return 0;
}
