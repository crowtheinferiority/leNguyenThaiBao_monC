#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    // Nhap so gio lam viec cua sau nhan vien.
    cout << "Nhap so gio lam viec cua " << NUM_EMPLOYEES << " nhan vien: ";
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    // Hien thi cac gia tri trong mang.
    cout << "Cac gio ban da nhap la:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;

    return 0;
}
