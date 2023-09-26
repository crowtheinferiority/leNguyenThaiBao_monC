#include <iostream>
using namespace std;

int main()
{
    int game = 1;
    int points;
    int total = 0;

    cout << "Nhap so diem ma doi cua ban da dat duoc\n";
    cout << "cho den nay trong mua giai, sau do nhap -1 khi hoan thanh.\n\n";
    cout << "Nhap diem cho tran dau thu " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;
        game++;
        cout << "Nhap diem cho tran dau thu " << game << ": ";
        cin >> points;
    }

    cout << "\nTong so diem la " << total << endl;
    return 0;
}
