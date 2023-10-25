// Chương trình này chuyển đổi giây thành phút và giây.
#include <iostream>
using namespace std;

int main() {
    // Tổng số giây là 125.
    int tongSoGiay = 125;

    // Biến cho phút và giây
    int phut, giay;

    // Lấy số phút.
    phut = tongSoGiay / 60;

    // Lấy số giây còn lại.
    giay = tongSoGiay % 60;

    // Hiển thị kết quả.
    cout << tongSoGiay << " giay tuong duong voi:\n";
    cout << "Phut: " << phut << endl;
    cout << "Giay: " << giay << endl;
    
    return 0;
}
