// Chương trình này yêu cầu người dùng nhập tử số và mẫu số của một phân số và hiển thị
// giá trị thập phân tương ứng.


#include <iostream>
using namespace std;

int main() {
    double numerator, denominator;

    cout << "This program shows the decimal value of a fraction.\n";
    cout << "Enter the numerator: ";
    cin >> numerator;
    cout << "Enter the denominator: ";
    cin >> denominator;
    cout << "The decimal value is " << (numerator / denominator) << endl;

    return 0;
}