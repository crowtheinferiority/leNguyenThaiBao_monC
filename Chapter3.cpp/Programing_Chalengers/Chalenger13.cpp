#include <iostream>
#include <iomanip>  // Để sử dụng setprecision

using namespace std;

int main() {
    // Khai báo hằng số cho tỷ giá chuyển đổi
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Khai báo biến
    double soTienUSD, soTienYen, soTienEuro;

    // Nhập số tiền từ người dùng
    cout << "Nhap so tien USD: $";
    cin >> soTienUSD;

    // Tính toán số tiền tương ứng ở Yên Nhật và Euro
    soTienYen = soTienUSD * YEN_PER_DOLLAR;
    soTienEuro = soTienUSD * EUROS_PER_DOLLAR;

    // Hiển thị kết quả với định dạng số cố định và 2 chữ số thập phân
    cout << fixed << setprecision(2);
    cout << "So tien tuong ung o Yen Nhat la: " << soTienYen << " Yen" << endl;
    cout << "So tien tuong ung o Euro la: " << soTienEuro << " Euro" << endl;

    return 0;
}
