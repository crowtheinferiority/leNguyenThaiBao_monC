//day la 1 vi du ve tinh luong cho nhan vien lam them trong 1 tuan voi 50 gio trong do co 40 gio can ban voi muc luong 18,5$/h
//va 10h voi muc luong 27.78$/h.
#include <iostream>
using namespace std;
int main(){
    double soTienNhanDuoc,
    tienLuongGoc,
    tienLuongLamThem,
    soGioLamChinhThuc = 40,
    soGioLamThem = 10,
    luongLamChinhThuc = 18.25,
    luongLamThem = 27.78;
    //so tien nhan vien nhan duoc khi lam chinh thuc la
    tienLuongGoc = soGioLamChinhThuc * luongLamChinhThuc;
    //so tien nhan vien nhan duoc khi lam them la
    tienLuongLamThem = soGioLamThem * luongLamThem;
    //tong so luong nhan duoc
    soTienNhanDuoc = tienLuongGoc + tienLuongLamThem;
    //xuat so tien nhan vien do nhan duoc
    cout << "Tien luong thang nay cua nhan vien la: " << soTienNhanDuoc << endl;
    return 0;
}