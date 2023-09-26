#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days; // So ngay
    double total = 0.0; // Bien tong, khoi tao ban dau la 0

    // Nhan so ngay
    cout << "Trong bao nhieu ngay ban co cac con so doanh so? ";
    cin >> days;

    // Nhan so doanh so cho moi ngay va tich luy tong
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Nhap so doanh so cho ngay " << count << ": ";
        cin >> sales;
        total += sales; // Tich luy tong
    }

    // Hien thi tong doanh so
    cout << fixed << showpoint << setprecision(2);
    cout << "Tong doanh so la $" << total << endl;
    return 0;
}
