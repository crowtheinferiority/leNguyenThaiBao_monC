#include <iostream>
#include <cstdlib> // Để sử dụng hàm rand()
#include <ctime>   // Để sử dụng hàm time()

using namespace std;

int main() {
    // Khởi tạo seed cho hàm rand() bằng thời gian hiện tại
    srand(time(0));

    // Tạo hai số ngẫu nhiên để thêm
    int num1 = rand() % 1000; // Số ngẫu nhiên từ 0 đến 999
    int num2 = rand() % 1000; // Số ngẫu nhiên từ 0 đến 999

    // Hiển thị bài toán cho học sinh
    cout << num1 << endl << "+ " << num2 << endl;

    // Tạm dừng để học sinh giải bài toán
    cout << "Nhap bat ki phim nao de xac nhan muon xem dap an...";
    cin.get(); // Chờ người dùng nhấn một phím

    // Hiển thị đáp án đúng
    int correctAnswer = num1 + num2;
    cout << "Dap an la: " << correctAnswer << endl;

    return 0;
}
