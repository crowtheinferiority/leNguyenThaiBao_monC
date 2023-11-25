#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int SO_THANG = 3;
    string tenThang[SO_THANG];
    double luongMua[SO_THANG];

    // Yêu cầu người dùng nhập thông tin
    for (int i = 0; i < SO_THANG; ++i) {
        cout << "Nhap ten cua thang " << i + 1 << ": ";
        cin >> tenThang[i];

        cout << "Nhap luong mua (inch) cua thang " << i + 1 << ": ";
        cin >> luongMua[i];
    }

    // Tính trung bình lượng mưa
    double tongLuongMua = 0.0;
    for (int i = 0; i < SO_THANG; ++i) {
        tongLuongMua += luongMua[i];
    }
    double trungBinhLuongMua = tongLuongMua / SO_THANG;

    // Hiển thị kết quả
    cout << "Trung binh luong mua cho ";
    for (int i = 0; i < SO_THANG; ++i) {
        cout << tenThang[i];
        if (i < SO_THANG - 1) {
            cout << ", ";
        }
    }
    cout << " la " << fixed << setprecision(2) << trungBinhLuongMua << " inches." << endl;

    return 0;
}
