/*Giả sử mức nước biển hiện nay đang tăng lên khoảng 1,5 milimét mỗi năm, hãy viết một 
chương trình hiển thị:

Số milimét cao hơn so với mức nước hiện tại mà mức nước biển sẽ đạt được sau 5 năm.
Số milimét cao hơn so với mức nước hiện tại mà mức nước biển sẽ đạt được sau 7 năm.
Số milimét cao hơn so với mức nước hiện tại mà mức nước biển sẽ đạt được sau 10 năm.*/
#include <iostream>
using namespace std;
int main (){
    double bienThienMucNuocBien, mucNuocTangMoiNam = 1.5, th1 = 5, th2 = 7, th3 = 10;
    bienThienMucNuocBien = mucNuocTangMoiNam * th1;
    cout << "So milimet cao hon voi muc nuoc hien tai ma muc nuoc bien se dat duoc sau 5 nam la: " 
    << bienThienMucNuocBien << endl;
    bienThienMucNuocBien = mucNuocTangMoiNam * th2;
    cout << "So milimet cao hon voi muc nuoc hien tai ma muc nuoc bien se dat duoc sau 7 nam la: "
    << bienThienMucNuocBien << endl;
    bienThienMucNuocBien = mucNuocTangMoiNam * th3;
    cout << "So milimet cao hon voi muc nuoc hien tai ma muc nuoc bien se dat duoc sau 10 nam la: "
    << bienThienMucNuocBien << endl;
    return 0;
}