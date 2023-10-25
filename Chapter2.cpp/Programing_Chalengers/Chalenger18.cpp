/*Tiêu thụ Đồ uống Năng Lượng
Một công ty đồ uống có ga vừa khảo sát gần đây 16,500 khách hàng của mình và phát hiện rằng khoảng 15 
phần trăm trong số họ mua một hoặc nhiều hộp đồ uống năng lượng mỗi tuần. Trong số những khách hàng đó
 mua đồ uống năng lượng, khoảng 58 phần trăm thích đồ uống có hương cam. Hãy viết một chương trình hiển 
 thị những thông tin sau:
• Số lượng xấp xỉ khách hàng trong cuộc khảo sát mua một hoặc nhiều loại đồ uống năng lượng mỗi tuần.
• Số lượng xấp xỉ khách hàng trong cuộc khảo sát thích đồ uống năng lượng có hương cam.*/
#include <iostream>
using namespace std;
int main (){
    double khacHang = 16500, muaSanPham = 0.15, thichNuocCam = 0.58;
    int soKHMuaSanPham, soKHThichNuocCam;
    soKHMuaSanPham = khacHang * muaSanPham;
    cout << "So luong xap xi khach hang trong cuoc khao rat mua nuoc: " << soKHMuaSanPham << " nguoi "<< endl;
    soKHThichNuocCam = soKHMuaSanPham * thichNuocCam;
    cout << "So luong xap xi khach hang thich nuoc cam: " <<soKHThichNuocCam << " nguoi "<< endl;
    return 0;
}