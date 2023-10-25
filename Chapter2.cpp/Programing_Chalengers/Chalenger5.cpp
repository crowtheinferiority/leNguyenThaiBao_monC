/*Viết một chương trình lưu trữ các giá trị sau đây vào năm biến khác nhau:
28, 32, 37, 24 và 33. Chương trình nên tính trước tổng của năm biến này và
lưu kết quả trong một biến riêng biệt có tên là sum. Sau đó, chương trình
 nên chia biến sum cho 5 để có được trung bình. Hiển thị trung bình lên màn hình
 */
#include <iostream>
using namespace std;
int main(){
    double A = 28, B = 32 , C = 37, D = 24 , E = 33, sum, trungBinh;
    ///tong cua 5 bien la
    sum = A + B + C + D + E;
    trungBinh = sum / 5;
    cout << "Gia tri trung binh cua 5 bien la: " << trungBinh << endl;
return 0;
}