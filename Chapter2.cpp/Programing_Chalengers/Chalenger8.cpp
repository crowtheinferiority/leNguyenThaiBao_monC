/*Tổng số tiền mua hàng
Một khách hàng trong một cửa hàng đang mua năm món hàng. Giá của năm món hàng đó là:
Giá của món hàng 1 = 15,95 đô la
Giá của món hàng 2 = 24,95 đô la
Giá của món hàng 3 = 6,95 đô la
Giá của món hàng 4 = 12,95 đô la
Giá của món hàng 5 = 3,95 đô la
Hãy viết một chương trình lưu giá của năm món hàng trong năm biến khác nhau. Hiển 
thị giá của từng món hàng, tổng giá trị gốc , số tiền thuế và tổng cộng.
 Giả định rằng thuế mua sắm là 7%.
*/ 
#include <iostream>
using namespace std;
int main (){
    double SP1 = 15.95, SP2 = 24.95, SP3 = 6.95, SP4 = 12.95, SP5 = 3.95,
    hoaDonGoc, thue = 0.07, soTienThue, tongCong;
    cout << "\tHOA DON\n";
    cout << "Gia tri cua mon hang 1 la: $" << SP1 << endl;
    cout << "Gia tri cua mon hang 2 la: $" << SP2 << endl;
    cout << "Gia tri cua mon hang 3 la: $" << SP3 << endl;
    cout << "Gia tri cua mon hang 4 la: $" << SP4 << endl;
    cout << "Gia tri cua mon hang 5 la: $" << SP5 << endl;
    //tinh tong hoa don
    hoaDonGoc = SP1 + SP2 + SP3 + SP4 + SP5; 
    cout << "Tong gia tri goc: $" << hoaDonGoc << endl;
    //tinh so tien thue
    soTienThue = hoaDonGoc * thue;
    cout << "So tien thue: $" << soTienThue << endl;
    //tong hoa don
    tongCong = soTienThue + hoaDonGoc;
    cout << "Tong cong hoa don: $" << tongCong << endl;
    return 0;
}