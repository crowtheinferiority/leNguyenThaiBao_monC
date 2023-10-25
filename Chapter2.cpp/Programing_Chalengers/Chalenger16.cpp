#include <iostream>
using namespace std;

int main() {
    int n = 5;
 // Số hàng 

    // In nửa trên
    for (int i = 0; i < n; i++) {
        // In khoảng trắng trước các dấu '*'
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // In các dấu '*'
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        // Xuống dòng
        cout << endl;
    }

    // In nửa dưới
    for (int i = n - 2; i >= 0; i--) {
        // In khoảng trắng trước các dấu '*'
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // In các dấu '*'
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }

        // Xuống dòng
        cout << endl;
    }

    return 0;
}
