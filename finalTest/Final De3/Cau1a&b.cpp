#include <iostream>
#include <cmath>
using namespace std;

// Định nghĩa lớp A_B_Sqrt_X
class A_B_Sqrt_X {
private:
    int a;
    int b;
    static const int CAN = 7; // Hằng số static CAN

public:
    // Hàm tạo có tham số (hoặc mặc định)
    A_B_Sqrt_X(int a = 0, int b = 0) : a(a), b(b) {}

    // Toán tử cộng
    A_B_Sqrt_X operator+(const A_B_Sqrt_X& moah) const {
        return A_B_Sqrt_X(a + moah.a, b + moah.b);
    }

    // Toán tử trừ
    A_B_Sqrt_X operator-(const A_B_Sqrt_X& moah) const {//Nạp chồng 4 toán tử để thực hiện các phép tính
        return A_B_Sqrt_X(a - moah.a, b - moah.b);
    }

    // Toán tử đảo dấu (âm)
    A_B_Sqrt_X operator-() const {
        return A_B_Sqrt_X(-a, -b);
    }

    // Toán tử nhân
    A_B_Sqrt_X operator*(const A_B_Sqrt_X& uocj) const {
        A_B_Sqrt_X booba;
        booba.a = a * uocj.a + b * uocj.b * CAN;
        booba.b = a * uocj.b + b * uocj.a;
        return booba;
    }

    // Toán tử xuất ra (out) thông tin đối tượng
    friend ostream& operator<<(ostream& os, const A_B_Sqrt_X& abCANx) {
        os << abCANx.a << " + (" << abCANx.b << ")sqrt(" << abCANx.CAN << ")";
        return os;
    }

    // Toán tử nhập vào (in) thông tin đối tượng
    friend istream& operator>>(istream& is, A_B_Sqrt_X& abCanx) {
        is >> abCanx.a >> abCanx.b;
        return is;
    }
};

// Hàm main
int main() {
    // Tạo đối tượng x1 và x2 từ lớp A_B_Sqrt_X
    A_B_Sqrt_X x1(2, 3);
    A_B_Sqrt_X x2(1, 4);

    // Thực hiện các phép toán đối với đối tượng x1 và x2
    A_B_Sqrt_X sum = x1 + x2;
    A_B_Sqrt_X difference = x1 - x2;
    A_B_Sqrt_X negation = -x1;
    A_B_Sqrt_X product = x1 * x2;

    // Xuất ra kết quả
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Negation: " << negation << endl;
    cout << "Product: " << product << endl;

    return 0;
}
