//Viết một chương trình để tính thuế và tiền boa cho hóa đơn nhà hàng của một 
//khách hàng với một khoản phí bữa ăn là $88.67. Thuế phải là 6.75 phần trăm 
//của chi phí bữa ăn. Tiền boa phải là 20 phần trăm của tổng sau khi cộng thuế. 
//Hiển thị chi phí bữa ăn, số tiền thuế, số tiền boa và tổng hóa đơn trên màn 
//hình. 
#include <iostream>
using namespace std;
int main (){
    double chiPhiBuaAn = 88.67, soTienThue, soTienBoa,hoaDonSauKhiCongThue,
    thue = 0.0675, tienBoa = 0.2, hoaDonDaThemTienBo;
    cout << "\tHOA DON\n"; //in hoa don
    //in ra tien an
    cout << "Chi phi bua an la: $" << chiPhiBuaAn << endl;
    //tinh toan so tien thue 
    soTienThue = chiPhiBuaAn * thue;
    //hoa don sau khi cong thue
    hoaDonSauKhiCongThue = chiPhiBuaAn + soTienThue;
    //in so tien thue   ra
    cout << "So tien thue la: $" << soTienThue << endl;
    //tinh toan so tien boa ( tong tien hoa don sau khi cong thue)
    soTienBoa = hoaDonSauKhiCongThue * tienBoa;
    //hoa don sau khi da them tien boa
    hoaDonDaThemTienBo = hoaDonSauKhiCongThue + soTienBoa;
    cout << "So tien boa: $" << soTienBoa << endl;

    cout << "Tong hoa don: $" << hoaDonDaThemTienBo << endl;
    return 0;
}