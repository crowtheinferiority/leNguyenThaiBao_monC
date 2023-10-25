/*Ủy ban chứng khoán
Kathryn mua 750 cổ phiếu với giá 35 USD một cổ phiếu. Cô ấy phải trả tiền cho cô ấy
môi giới chứng khoán hoa hồng 2 phần trăm cho giao dịch. Viết chương trình tính và hiển thị kết quả sau:
• Số tiền trả cho riêng cổ phiếu (không tính hoa hồng)
• Số tiền hoa hồng
• Tổng số tiền thanh toán (đối với cổ phiếu cộng với hoa hồng)*/
#include <iostream>
using namespace std;
int main(){
    double coPhieu = 750, giaCoPhieu = 35, hoaHong = 0.02, tienCoPhieu, tienHoaHong, tongSoTien;
    //tinh so tien co phieu
    tienCoPhieu = coPhieu + giaCoPhieu;
    cout << "So tien tra cho rieng co phieu (khong tinh hoa hong): $" << tienCoPhieu << endl;
    tienHoaHong = tienCoPhieu * hoaHong;
    cout << "So tien hoa hong: $" <<tienHoaHong << endl;
    tongSoTien = tienCoPhieu + tienHoaHong;
    cout << "Tong so tien thanh toan (doi voi coc hieu cong voi hoa hong): $" <<tongSoTien << endl;
    return 0;

}