//chuong trinh tinh so tien tiet kiem dua vao so luong kiem duoc moi thang
//tinh theo 3 moc la 5%, 7%, 10% gia su moi thang kiem duoc 6.000$, tinh so tien can tiet kiem moi thang
#include <iostream>
using namespace std;
int main (){
    double  tienLuongHangThang = 6000,
    soTienTietKiem;
    //tiet kiem 5% moi thang
    soTienTietKiem = 0.05 * tienLuongHangThang;
    cout << "5% moi thang thi can phai tiet kiem: $" << soTienTietKiem << endl;
    //tiet kiem 7% moi thang
    soTienTietKiem = 0.07 * tienLuongHangThang;
    cout << "7% moi thang thi can phai tiet kiem: $" << soTienTietKiem << endl;
    //tiet kiem 10% moi thang
    soTienTietKiem = 0.1  * tienLuongHangThang;
    cout << "10% moi thang thi can phai tiet kiem: $" << soTienTietKiem << endl;
    return 0; 
}