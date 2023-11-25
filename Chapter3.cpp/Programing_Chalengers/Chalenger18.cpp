#include <iostream>
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
#include <cmath>   // Để sử dụng hàm pow()

using namespace std;

int main() {
    // Nhập số dư ban đầu, lãi suất và số lần lãi suất được cộng dồn
    double principal, rate;
    int timesCompounded;

    cout << "Nhap so du ban dau la: $";
    cin >> principal;

    cout << "Nhap lai suat (theo phan tram %): ";
    cin >> rate;

    cout << "Nhap so lan lai suat duoc gop trong 1 nam: ";
    cin >> timesCompounded;

    // Chuyển đổi lãi suất thành tỷ lệ (percentage) và thực hiện tính toán
    rate /= 100.0;
    double amount = principal * pow((1 + rate / timesCompounded), timesCompounded);

    // Tính lãi suất và số dư sau một năm
    double interest = amount - principal;

    // Hiển thị bản báo cáo
    cout << fixed << setprecision(2); // Để hiển thị số thập phân với 2 chữ số
    cout << "Ty le lai suat la: " << rate * 100 << "%" << endl;
    cout << "So lan gop lai suatla: " << timesCompounded << endl;
    cout << "So tien ban dau la: $ " << principal << endl;
    cout << "Lai suat la: $ " << interest << endl;
    cout << "So du sau cung trong tai khoan la: $ " << amount << endl;

    return 0;
}
