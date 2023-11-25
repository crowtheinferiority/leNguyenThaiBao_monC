// /*Kiểm tra trung bình
// Viết chương trình yêu cầu lấy 5 điểm bài kiểm tra. Chương trình sẽ tính điểm kiểm tra trung bình và hiển
// thị nó. Số hiển thị phải được định dạng theo điểm cố định
// ký hiệu, với độ chính xác một dấu thập phân.*/
// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main(){
//     double bkt[5];
//     double diemTong = 0.0;
//     for ( int i = 0; i < 5; ++i){
//         cout << "Nhap diem bai kiem tra: #" << i+ 1 << ":";
//         cin >> bkt[i];
//         diemTong += bkt[i];
//     }
//     double diemTrungBinnh = diemTong / 5.0;
//     cout << "Diem trung binh cua 5 bai kiem tra la: " << fixed << setprecision (2) << diemTrungBinnh << endl;
//     return 0;
    
// }
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double dkt[5];
    double diemTong = 0.0;
    
    for (int i=0; i < 5; ++i){
        cout << "Nhap diem bai kiem tra #" << i + 1 << ":";
        cin >> dkt[i];
        diemTong += dkt[i];
    }
    double diemTrungBinh;
    diemTrungBinh = diemTong / 5.0;
    cout << "Diem trung binh la: " << fixed << setprecision (1) << diemTrungBinh << endl;
    return 0;
}
