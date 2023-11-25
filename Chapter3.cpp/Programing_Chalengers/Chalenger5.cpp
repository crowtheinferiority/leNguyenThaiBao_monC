/*Phần trăm Nam và Nữ

Viết chương trình yêu cầu người dùng nhập số lượng học sinh Nam và số lượng học sinh Nữ đã đăng ký trong 
một lớp. Chương trình sẽ hiển thị phần trăm của Nam và Nữ trong lớp.

Gợi ý: Giả sử có 8 học sinh Nam và 12 học sinh Nữ trong một lớp. Tổng số học sinh trong lớp là 20. Phần
 trăm học sinh Nam có thể tính như sau: 8 ÷ 20 = 0.4, tương đương với 40%. Phần trăm học sinh Nữ có thể 
 tính như sau: 12 ÷ 20 = 0.6, tương đương với 60%.*/
 #include <iostream>
 #include <iomanip>
using namespace std;
int main(){
    double hsNam, hsNu, tongHs;
    cout << "Nhap so luong hoc sinh nam cua lop: ";
    cin >> hsNam;
    cout << "Nhap so luong hoc sinh nu cua lop: ";
    cin >> hsNu;
    tongHs = hsNam + hsNu;
    double ptHsNam, ptHsNu;
    ptHsNam = (hsNam / tongHs)*100;;
    ptHsNu = (hsNu/tongHs)*100;
    cout << "Phan tram hoc sinh nam la: " << fixed << setprecision (2) << ptHsNam << "%" << endl;
    cout << "Phan tram hoc sinh nu la: " << fixed << setprecision (2) << ptHsNu << "%"<< endl;
    return 0;
}