/*Trung Bình Lượng Mưa
Viết một chương trình tính trung bình lượng mưa trong ba tháng. Chương trình sẽ yêu cầu người dùng nhập 
tên của từng tháng, chẳng hạn như Tháng Sáu hoặc Tháng Bảy, và lượng mưa (tính bằng inch) trong mỗi 
tháng. Chương trình sẽ hiển thị một thông báo tương tự như sau:
"Trung bình lượng mưa cho Tháng Sáu, Tháng Bảy và Tháng Tám là 6.72 inches."*/
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
    int thang;
    cout << "Nhap so thang ban muon tinh luong mua: ";
    cin >> thang;
    const int SO_THANG = thang;
    string thangThu[SO_THANG];
    double luongMua[SO_THANG];
    // yeu cau nhap thong tin
for (int i = 0; i< SO_THANG; ++i){
    cout << "Nhap ten cua thang thu " << i + 1 << ": " ;
    getline(cin >> ws, thangThu[i]);

    cout << "Nhap luong mua cua thang thu " << i+1 << ": ";
    cin >> luongMua[i];
}
    //tinh trung binh luong mua 3 thang
    double tongLuongMua = 0.0;
    for (int i = 0; i < SO_THANG; ++i ){
        tongLuongMua += luongMua[i];
    }
    double trungBinhLuongMua = tongLuongMua/SO_THANG;

    //in ra thong bao
 cout << "Trung binh luong mua cho ";
for (int i = 0; i < SO_THANG; ++i){
    cout << thangThu[i];
    if (i < SO_THANG - 1){
        cout << ",";
    }
}
cout << " la: " << fixed << setprecision (2) << trungBinhLuongMua << " inches." << endl;
return 0;
}