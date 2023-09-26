#include<iostream>
using namespace std;
int main (){
    double gio, mucLuong, traTien;
    //lấy số giờ làm việc.
    cout << "So gio ban da lam viec la ?: ";
    cin >> gio;
    //mức lương theo giờ
    cout << "Moi gio ban nhan duoc bao nhieu tien ?: ";
    cin >> mucLuong;
    //tính toán số tiền phải trả
    traTien = mucLuong*gio;
    //hiển thị số tiền cần trả ra.
    cout << "Ban duoc tra: " << traTien <<".000d"<<endl;
    return 0;

}