#include <iostream>
#include <iomanip>  // Để sử dụng setprecision

using namespace std;

int main() {
    // Khai báo biến
    string thang, tenThang;
    int nam;
    double tongThuNhap, doanhSoBanHang, thueBanHangQuan, thueBanHangBang, tongThueBanHang;

    // Nhập thông tin từ người dùng
    cout << "Nhap thang (vd: Thang 10): ";
    getline(cin, thang);

    cout << "Nhap nam: ";
    cin >> nam;

    cout << "Nhap tong thu nhap: $";
    cin >> tongThuNhap;

    // Tính toán doanh số bán hàng
    doanhSoBanHang = tongThuNhap / 1.06;

    // Tính toán các loại thuế bán hàng
    thueBanHangQuan = doanhSoBanHang * 0.02;
    thueBanHangBang = doanhSoBanHang * 0.04;

    // Tính tổng thuế bán hàng
    tongThueBanHang = thueBanHangQuan + thueBanHangBang;

    // Hiển thị báo cáo
    cout << fixed << setprecision(2);
    cout << "\nThang: " << thang << " " << nam << endl;
    cout << "-----------------------\n";
    cout << "Tong Thu Nhap: $" << tongThuNhap << endl;
    cout << "Doanh So Ban Hang: $" << doanhSoBanHang << endl;
    cout << "Thue Ban Hang Cua Quan: $" << thueBanHangQuan << endl;
    cout << "Thue Ban Hang Cua Bang: $" << thueBanHangBang << endl;
    cout << "Tong Thue Ban Hang: $" << tongThueBanHang << endl;

    return 0;
}
