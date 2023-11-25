#include <iostream>
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
#include <cmath>   // Để sử dụng hàm pow()

using namespace std;

int main() {
    // Nhập số tiền vay, lãi suất hàng năm và số lượng thanh toán
    double soTienVay, laiSuatHangNam;
    int soLanThanhToan;

    cout << "Nhap so tien vay: $";
    cin >> soTienVay;

    cout << "Nhap lai suat hang nam (duoi dang %): ";
    cin >> laiSuatHangNam;

    cout << "Nhap so lan thanh toan: ";
    cin >> soLanThanhToan;

    // Chuyển đổi lãi suất từ dạng phần trăm sang dạng thập phân và tính lãi suất hàng tháng
    laiSuatHangNam /= 100.0;
    double laiSuatHangThang = laiSuatHangNam / 12.0;

    // Tính toán thanh toán hàng tháng
    double thanhToanHangThang = (laiSuatHangThang * pow(1 + laiSuatHangThang, soLanThanhToan)) /
                            (pow(1 + laiSuatHangThang, soLanThanhToan) - 1) * soTienVay;

    // Tính toán tổng số tiền đã trả và tổng lãi suất đã trả
    double tongSoTienDaTra = thanhToanHangThang * soLanThanhToan;
    double tongLaiSuatDaTra = tongSoTienDaTra - soTienVay;

    // Hiển thị báo cáo
    cout << fixed << setprecision(2); // Hiển thị số thập phân với 2 chữ số
    cout << "So tien vay: $ " << soTienVay << endl;
    cout << "Lai suat hang thang: " << laiSuatHangThang * 100 << "%" << endl;
    cout << "So luong tinh toan: " << soLanThanhToan << endl;
    cout << "Thanh toan hang thang: $ " << thanhToanHangThang << endl;
    cout << "So tien da tra: $ " << tongSoTienDaTra << endl;
    cout << "Lai suat da tra: $ " << tongLaiSuatDaTra << endl;

    return 0;
}
