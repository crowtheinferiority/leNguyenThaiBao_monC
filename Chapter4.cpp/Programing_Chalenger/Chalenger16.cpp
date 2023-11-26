#include <iostream>
#include <string>
using namespace std;

int main() {
    string runner1, runner2, runner3;
    double time1, time2, time3;

    cout << "Enter the name of the first runner: ";
    cin >> runner1;
    cout << "Enter the time for the first runner: ";
    cin >> time1;

    cout << "Enter the name of the second runner: ";
    cin >> runner2;
    cout << "Enter the time for the second runner: ";
    cin >> time2;

    cout << "Enter the name of the third runner: ";
    cin >> runner3;
    cout << "Enter the time for the third runner: ";
    cin >> time3;

    if (time1 <= 0 || time2 <= 0 || time3 <= 0) {
        cout << "Error: The times must be positive numbers.";
        return 0;
    }

    if (time1 < time2 && time1 < time3) {
        cout << "First place: " << runner1 << endl;
        if (time2 < time3) {
            cout << "Second place: " << runner2 << endl;
            cout << "Third place: " << runner3 << endl;
        } else {
            cout << "Second place: " << runner3 << endl;
            cout << "Third place: " << runner2 << endl;
        }
    } else if (time2 < time1 && time2 < time3) {
        cout << "First place: " << runner2 << endl;
        if (time1 < time3) {
            cout << "Second place: " << runner1 << endl;
            cout << "Third place: " << runner3 << endl;
        } else {
            cout << "Second place: " << runner3 << endl;
            cout << "Third place: " << runner1 << endl;
        }
    } else {
        cout << "First place: " << runner3 << endl;
        if (time1 < time2) {
            cout << "Second place: " << runner1 << endl;
            cout << "Third place: " << runner2 << endl;
        } else {
            cout << "Second place: " << runner2 << endl;
            cout << "Third place: " << runner1<< endl;
        }
    }

    return 0;
}
