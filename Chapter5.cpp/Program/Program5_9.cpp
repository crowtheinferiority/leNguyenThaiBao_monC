#include <iostream>
using namespace std;

int main()
{
    int soNhoNhat, // So bat dau de tinh binh phuong
        soLonNhat; // So lon nhat de tinh binh phuong

    // Nhap gia tri toi thieu va toi da de hien thi.
    cout << "Toi se hien thi mot bang cac so va binh phuong cua chung.\n"
         << "Nhap so bat dau: ";
    cin >> soNhoNhat;
    cout << "Nhap so ket thuc: ";
    cin >> soLonNhat;

    // Hien thi bang.
    cout << "So Binh phuong cua so\n"
         << "-------------------------\n";

    for (int so = soNhoNhat; so <= soLonNhat; so++)
        cout << so << "\t\t" << (so * so) << endl;

    return 0;
}
