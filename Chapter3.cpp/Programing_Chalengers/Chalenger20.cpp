#include <iostream>
#include <cmath>  // Để sử dụng hàm pow()

using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    // Bước A: Nhập đường kính của pizza
    double diameter;
    cout << "Nhap duong kinh cua pizza (inch): ";
    cin >> diameter;

    // Bước B: Tính toán số lượng miếng pizza có thể chia
    double radius = diameter / 2.0;
    double pizzaArea = PI * pow(radius, 2);
    int numberOfSlices = static_cast<int>(pizzaArea / SLICE_AREA);

    // Bước C: Hiển thị thông báo về số lượng miếng pizza
    cout << "So luong banh pizza co the chia la: " << fixed << numberOfSlices << endl;

    return 0;
}
