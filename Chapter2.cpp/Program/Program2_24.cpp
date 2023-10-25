// Chương trình trích xuất chữ số bên phải của một số.
#include <iostream>
using namespace std;

int main() {
    int number = 12345;
    int rightMost = number % 10;

    cout << "Cho so nam ben phai trong so " << number << " la " << rightMost << endl;

    return 0;
}
