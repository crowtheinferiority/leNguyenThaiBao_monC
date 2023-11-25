#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    string city;

    // Prompt the user to enter their name
    cout << "Please enter your name: ";

    // Use getline to read the entire line of input into the 'name' string
    getline(cin, name);

    // Prompt the user to enter the city they live in
    cout << "Enter the city you live in: ";

    // Use getline to read the entire line of input into the 'city' string
    getline(cin, city);

    // Display a greeting using the entered name
    cout << "Hello, " << name << endl;

    // Display the city entered by the user
    cout << "You live in " << city << endl;

    return 0;
}
