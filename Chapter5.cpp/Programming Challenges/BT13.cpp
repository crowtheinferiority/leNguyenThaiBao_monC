#include <iostream>
using namespace std;

int main() {
    int number;
    int largest, smallest;

    cout << "Enter a series of integers (-99 to end):" << endl;

    // Initialize largest and smallest with the first entered number
    cin >> number;
    largest = smallest = number;

    while (number != -99) {
        if (number > largest) {
            largest = number;
        }
        if (number < smallest) {
            smallest = number;
        }
        cin >> number;
    }

    cout << "Largest number: " << largest << endl;
    cout << "Smallest number: " << smallest << endl;

    return 0;
}

