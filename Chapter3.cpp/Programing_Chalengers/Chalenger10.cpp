/*Bảo Hiểm Bao Nhiêu?
Nhiều chuyên gia tài chính khuyến cáo rằng chủ sở hữu tài sản nên bảo trì ngôi nhà hoặc công trình 
của họ ít nhất là 80% so với số tiền mà việc thay thế cấu trúc đó sẽ tốn kém. Viết một chương trình 
yêu cầu người dùng nhập vào chi phí thay thế của một công trình và sau đó hiển thị số tiền bảo trì 
tối thiểu mà họ nên trả cho tài sản đó.*/
#include <iostream>
using namespace std;
int main(){
    double chiPhiThayThe, soTienBaoTri;
    cout << "Nhap chi phi thay the cua cong trinh: $";
    cin >> chiPhiThayThe;
    soTienBaoTri = chiPhiThayThe* 0.8;
    cout << "So tien bao tri toi thieu ban nen tra la: $" << soTienBaoTri;
    return 0;
}