// Chương trình này hiển thị ba hàng số.
#include <iostream>
#include <iomanip> // Yêu cầu cho setw
using namespace std;

int main()
{
    int num1 = 2897, num2 = 5, num3 = 837,
    num4 = 34, num5 = 7, num6 = 1623,
    num7 = 390, num8 = 3456, num9 = 12;

    // Hiển thị hàng đầu tiên của số
    cout << setw(6) << num1 << setw(6)
         << num2 << setw(6) << num3 << endl;

    // Hiển thị hàng thứ hai của số
    cout << setw(6) << num4 << setw(6)
         << num5 << setw(6) << num6 << endl;

    // Hiển thị hàng thứ ba của số
    cout << setw(6) << num7 << setw(6)
         << num8 << setw(6) << num9 << endl;

    return 0;
}
