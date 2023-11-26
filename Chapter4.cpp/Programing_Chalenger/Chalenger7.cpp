#include <iostream>
using namespace std;

int main() {
    int seconds;

    cout << "Enter a number of seconds: ";
    cin >> seconds;

    if (seconds >= 86400) {
        cout << "That is approximately " << seconds / 86400 << " day(s).";
    } else if (seconds >= 3600) {
        cout << "That is approximately " << seconds / 3600 << " hour(s).";
    } else if (seconds >= 60) {
        cout << "That is approximately " << seconds / 60 << " minute(s).";
    } else {
        cout << "That is less than a minute.";
    }

    return 0;
}
