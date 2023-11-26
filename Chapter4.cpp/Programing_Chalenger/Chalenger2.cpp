#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number from 1 to 10: ";
    cin >> number;

    if (number < 1 || number > 10) {
        cout << "Invalid input. Please enter a number from 1 to 10.";
        return 0;
    }

    switch (number) {
        case 1: cout << "I"; break;
        case 2: cout << "II"; break;
        case 3: cout << "III"; break;
        case 4: cout << "IV"; break;
        case 5: cout << "V"; break;
        case 6: cout << "VI"; break;
        case 7: cout << "VII"; break;
        case 8: cout << "VIII"; break;
        case 9: cout << "IX"; break;
        case 10: cout << "X"; break;
    }

    return 0;
}
