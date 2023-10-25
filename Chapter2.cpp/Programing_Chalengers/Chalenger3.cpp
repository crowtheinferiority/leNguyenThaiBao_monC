//Tinh thue ban hang cua san pham tri gia $95. Thue o tieu bang la 4%, o hat la 2%.
#include <iostream>
using namespace std;
int main (){
 double giaGocCuaSanPham = 95, thueTaiTieuBang = 0.04, thueTaiHat = 0.02,
        giaSauThueTaiTieuBang,giaSauThueTaiHat;
//tinh tien san pham tai tieu bang
        giaSauThueTaiTieuBang = (giaGocCuaSanPham * thueTaiTieuBang)+giaGocCuaSanPham;
        cout << "Gia san pham o tieu bang sau khi tinh tien thue la: $" 
        << giaSauThueTaiTieuBang << endl;
//tinh tien san pham tai hat
        giaSauThueTaiHat = (giaGocCuaSanPham * thueTaiHat)+giaGocCuaSanPham;
        cout << "Gia san pham o hat sau khi tinh tien thue la: $"
        << giaSauThueTaiHat << endl;
        return 0;      
} 