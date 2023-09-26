// Chuong trinh nay ho tro ky thuat vien trong qua trinh kiem tra nhiet do cua mot chat.
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5; // Nhiet do toi da
    double temperature; // Bien de luu tru nhiet do

    // Nhap nhiet do hien tai.
    cout << "Nhap nhiet do Celsius cua chat: ";
    cin >> temperature;

    // Trong khi can thiet, huong dan ky thuat vien dieu chinh bo dieu khien nhiet do.
    while (temperature > MAX_TEMP)
    {
        cout << "Nhiet do qua cao. Hay giam nhiet do\n";
        cout << "bo dieu khien va cho 5 phut.\n";
        cout << "Sau do do lai nhiet do Celsius va nhap lai o day: ";
        cin >> temperature;
    }

    // Nhan nho ky thuat vien kiem tra lai nhiet do sau 15 phut.
    cout << "Nhiet do chap nhan duoc.\n";
    cout << "Hay kiem tra lai sau 15 phut.\n";

    return 0;
}
