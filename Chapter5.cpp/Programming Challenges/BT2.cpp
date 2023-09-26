#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 127; ++i) {
        cout << static_cast<char>(i) << ' ';
        if (i % 16 == 15) {
            cout << endl; // Start a new line after every 16 characters
        }
    }

    return 0;
}
