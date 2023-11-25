#include <iostream>

using namespace std;

int main() {
    char ch;  // Khai báo biến ch để lưu trữ ký tự

    // Hiển thị thông báo yêu cầu người dùng nhập một ký tự và nhấn Enter
    cout << "Type a character and press Enter: ";

    // Sử dụng cin để đọc một ký tự từ người dùng và lưu vào biến ch
    cin >> ch;

    // Hiển thị thông báo thông báo ký tự đã được nhập
    cout << "You entered " << ch << endl;

    return 0;
}
