/*Bao Nhiêu Widget?
Công ty Yukon Widget sản xuất các widget có trọng lượng là 12.5 pound mỗi chiếc.
Viết một chương trình tính toán số lượng widget được xếp trên một pallet, dựa trên trọng lượng tổng 
của pallet. Chương trình nên yêu cầu người dùng nhập vào trọng lượng của pallet mà không có widget 
và trọng lượng với các widget được xếp lên đó. Sau đó, chương trình sẽ tính toán và hiển thị số lượng
widget đã được xếp trên pallet.*/
#include <iostream>
using namespace std;
int main(){
    double coWidget, koWidget, soWidget, widget = 12.5, tongWidget;
    cout << "Nhap trong luong pallet khi khong co widget: ";
    cin >> koWidget;
    cout << "Nhap trong luong pallet khi co widget: " ;
    cin >> coWidget;
    tongWidget = coWidget - koWidget;
    soWidget = tongWidget / widget;
    cout << "So widget duoc xep tren pallet la: " << soWidget;
    return 0;
}