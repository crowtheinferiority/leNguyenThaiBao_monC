/*tổng lương hàng năm của nhân viên bằng cách nhân số tiền lương mỗi kỳ trả lương của
 nhân viên với số kỳ trả lương trong một năm và lưu kết quả vào biến annualPay. Hiển
  thị tổng lương hàng năm trên màn hình.*/
#include <iostream>
using namespace std;
int main (){
    double luongMoiThang = 2200.0, soKiTraLuong = 26, tongLuongCaNam;
    tongLuongCaNam = luongMoiThang * soKiTraLuong;
    cout << "Tong luong hang nam cua nhan vien la: $" << tongLuongCaNam << endl;
    return 0;
}




