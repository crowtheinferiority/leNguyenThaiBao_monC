//tinh so tien chiet khau cua cua hang voi san pham $59.95 duoc giam gia 20%, gia cua san pham la
#include <iostream>
using namespace std;
int main(){
    double giaGocCuaSanPham = 59.95 , soTienGiamGia, giaSanPhamSauGiamGia;
    cout << "Gia goc cua san pham la: $" << giaGocCuaSanPham << endl;
    //tinh so tien duoc giam gia
    soTienGiamGia = giaGocCuaSanPham * 0.2;
    cout << "So tien khach hang duoc giam gia: $" << soTienGiamGia << endl;
    //tinh so tien san pham sau giam gia
    giaSanPhamSauGiamGia = giaGocCuaSanPham - soTienGiamGia;
    cout << "Gia cua san pham sau giam gia la: $" << giaSanPhamSauGiamGia << endl;
    return 0;

}