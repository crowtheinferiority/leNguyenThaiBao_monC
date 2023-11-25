#include <iostream>
#include <cmath>
#include <iomanip> // Để sử dụng std::fixed và std::setprecision

using namespace std;

int main() {
    // Bước 1: Nhập góc trong radian từ người dùng
    double gocRadian;
    cout << "Nhap goc trong radian: ";
    cin >> gocRadian;

    // Bước 2: Tính toán sin, cos và tan của góc
    double sinGoc = sin(gocRadian);
    double cosGoc = cos(gocRadian);
    double tanGoc = tan(gocRadian);

    // Bước 3: Hiển thị kết quả với độ chính xác 4 chữ số thập phân
    cout << fixed << setprecision(4);
    cout << "Sin(" << gocRadian << ") = " << sinGoc << endl;
    cout << "Cos(" << gocRadian << ") = " << cosGoc << endl;
    cout << "Tan(" << gocRadian << ") = " << tanGoc << endl;

    return 0;
}
