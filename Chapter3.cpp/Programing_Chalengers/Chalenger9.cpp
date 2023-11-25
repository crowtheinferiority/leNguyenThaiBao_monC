/*Bao Nhiêu Calo?
Một túi bánh quy chứa 30 chiếc bánh. Thông tin calo trên túi bánh cho biết có 10 "phần" trong túi và
mỗi phần tương đương với 300 calo. Viết một chương trình yêu cầu người dùng nhập vào số bánh quy thực 
sự mà họ ăn và sau đó báo cáo tổng số calo đã tiêu thụ.*/
#include <iostream>
using namespace std;
int main(){
    double soBanhQuy;
    cout << "Nhap so banh quy ban da an: ";
    cin >> soBanhQuy;
    const int soBanhTrongTui = 30;
    const int soPhanTrongTui = 10;
    const int caloMoiPhan = 300;
    double tongCaloTieuThu = (soBanhQuy/soBanhTrongTui)*(soPhanTrongTui*caloMoiPhan);
    cout << "Tong calo ban da tieu thu la: " << tongCaloTieuThu << " Calo.";
    return 0;
}