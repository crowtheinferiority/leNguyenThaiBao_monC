/*Chi Phí Xe Hơi
Viết một chương trình yêu cầu người dùng nhập vào các chi phí hàng tháng cho các khoản chi tiêu sau khi 
vận hành ô tô của họ: thanh toán khoản vay, bảo hiểm, xăng, dầu, lốp và bảo dưỡng. Sau đó, chương trình 
sẽ hiển thị tổng chi phí hàng tháng của những khoản chi tiêu này và tổng chi phí hàng năm của chúng.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double khoanVay, baoHiem, xang, dau, baoDuong;
    double tongChiPhiHangThang, tongChiPhiHangNam, tongChiPhi;
    cout << "Nhap vao cac chi phi hang thang: \n";
    cout << "Thanh toan khoan vay: $";
    cin >> khoanVay;
    cout << "Bao hiem: $";
    cin >> baoHiem;
    cout << "Xang: $";
    cin >> xang;
    cout << "Dau: $";
    cin >> dau;
    cout << "Bao duong: $";
    cin >> baoDuong;
    tongChiPhi = khoanVay + baoHiem + xang + dau + baoDuong;
    tongChiPhiHangThang = tongChiPhi * 30;
    tongChiPhiHangNam = tongChiPhi * 365;
    cout << "Tong chi phi phai tra hang thang cua ban la: $" << fixed <<setprecision(2)<< tongChiPhiHangThang<< endl;
    cout << "Tong chi phi phai tra hang nam cua bann la: $" << fixed << setprecision(2)<< tongChiPhiHangNam << endl;
    return 0;
}