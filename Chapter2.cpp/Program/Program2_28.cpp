#include <iostream>
using namespace std;

int main()
{
    // Hằng số
    const double PI = 3.14159;
    const double DIAMETER = 10.0;

    // Biến để lưu giá trị chu vi
    double chuVi;

    // Tính chu vi
    chuVi = PI * DIAMETER;

    // Hiển thị chu vi
    cout << "Chu vi la: " << chuVi << endl;

    return 0;
}
