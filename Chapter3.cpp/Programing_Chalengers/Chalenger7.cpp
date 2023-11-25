/*
Box Office (Bảng doanh thu)

Một rạp chiếu phim chỉ giữ lại một phần trăm doanh thu thu được từ bán vé. Phần còn lại được chuyển 
đến nhà phân phối phim. Hãy viết một chương trình tính toán doanh thu tổng và lợi nhuận thực của một
 rạp trong một đêm. Chương trình nên yêu cầu tên của bộ phim và số lượng vé người lớn và trẻ em đã 
 được bán. (Giá của một vé người lớn là $10.00 và vé trẻ em là $6.00.) Nó nên hiển thị một báo cáo 
 tương tự như sau:
Tên Phim: "Bánh Xe của Nội Giận"
Vé Người Lớn Đã Bán: 382
Vé Trẻ Em Đã Bán: 127
Doanh Thu Tổng Cộng: $ 4582.00
Lợi Nhuận Tổng Cộng: $ 916.40
Số Tiền Trả Cho Nhà Phân Phối: $ 3665.60*/
#include <iostream> 
#include <iomanip>
using namespace std;
int main(){
    double veNguoiLon, veTreEm, doanhThu, loiNhuan, nhaPhanPhoi;
    double giaVeTreEm = 6.00, giaVeNguoiLon = 10.00, ptLoiNhuan = 0.01;
    cout << "Nhap so ve nguoi lon ban duoc: ";
    cin >> veNguoiLon;
    cout << "Nhap so ve tre em ban duoc: ";
    cin >> veTreEm;
    doanhThu = giaVeNguoiLon* veNguoiLon + giaVeTreEm * veTreEm;
    loiNhuan = doanhThu* ptLoiNhuan;
    nhaPhanPhoi = doanhThu - loiNhuan;
    cout << "Ten Phim: \"Banh xe chet choc\". " << endl;
    cout << "Ve nguoi lon da ban la: " << veNguoiLon<< endl;
    cout << "Ve tre em da ban la: " << veTreEm << endl;
    cout << "Doanh thu thong cong: $" << fixed <<setprecision(2) << doanhThu<< endl;
    cout << "Loi nhuan tong cong: $" << fixed <<setprecision(2)<< loiNhuan<< endl;
    cout << "So tien tra cho nha phan phoi la: $" << fixed <<setprecision(2)<< nhaPhanPhoi<< endl;

    return 0;
}