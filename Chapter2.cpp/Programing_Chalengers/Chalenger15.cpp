#include <iostream>
using namespace std;

int main() {
    int n = 6; // So hang

    for (int i = 0; i < n; i++) {
        // In khoang trong
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // In *
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    

    return 0;
}
