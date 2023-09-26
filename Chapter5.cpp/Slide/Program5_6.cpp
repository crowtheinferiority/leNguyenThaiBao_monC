// Chương trình này hien thi mot danh sach cac so va binh phuong cua chung
#include <iostream>
using namespace std;

int main()
{
    const int SO_NHO_NHAT = 1; // So bat dau de tinh binh phuong
    const int SO_LON_NHAT = 10; // So lon nhat de tinh binh phuong
    int so = SO_NHO_NHAT; // Bien dem

    cout << "So So binh phuong\n";
    cout << "------------------\n";
    while (so <= SO_LON_NHAT)
    {
        cout << so << "\t\t" << (so * so) << endl;
        so++; // Tang bien dem
    }
    return 0;
}
