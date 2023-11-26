#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng để ghi dữ liệu vào tệp
    int number1, number2, number3; // Biến để lưu trữ ba số nguyên

    // Mở một tệp đầu ra
    outputFile.open("Numbers.txt");

    // Nhận ba số từ người dùng
    cout << "Nhap mot so: ";
    cin >> number1;
    cout << "Nhap mot so khac: ";
    cin >> number2;
    cout << "Mot lan nua. Nhap mot so: ";
    cin >> number3;

    // Ghi ba số vào tệp
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "Cac so da duoc luu vao tep.\n";

    // Đóng tệp
    outputFile.close();
    cout << "Hoan thanh.\n";
    return 0;
}
