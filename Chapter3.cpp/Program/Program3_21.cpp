#include <iostream>

using namespace std;

int main() {
    char ch;

    // Hiển thị thông báo và sử dụng cin.get() để tạm dừng chương trình và đợi người dùng nhấn Enter
    cout << "This program has paused. Press Enter to continue.";
    cin.get(ch);

    // Hiển thị thông báo và sử dụng cin.get() để tạm dừng chương trình và đợi người dùng nhấn Enter
    cout << "It has paused a second time. Please press Enter again.";
    ch = cin.get();

    // Hiển thị thông báo và sử dụng cin.get() để tạm dừng chương trình và đợi người dùng nhấn Enter
    cout << "It has paused a third time. Please press Enter again.";
    cin.get();

    // Hiển thị thông báo khi chương trình đã kết thúc
    cout << "Thank you!";

    return 0;
}
