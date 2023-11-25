#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    // Bước A: Nhập số người tham gia và đường kính của pizza
    int soNguoiThamGia;
    double duongKinhPizza;

    cout << "Nhap so nguoi tham gia bua tiec: ";
    cin >> soNguoiThamGia;

    cout << "Nhap duong kinh cua pizza (inch): ";
    cin >> duongKinhPizza;

    // Bước B: Tính toán số lượng miếng pizza và số lượng pizza cần mua
    double banKinhPizza = duongKinhPizza / 2.0;
    double dienTichPizza = PI * pow(banKinhPizza, 2);
    int soLuongMiengPizza = static_cast<int>(dienTichPizza / SLICE_AREA);
    int soLuongPizzaCanMua = static_cast<int>(ceil(static_cast<double>(soNguoiThamGia * 4) / soLuongMiengPizza));

    // Bước C: Hiển thị thông báo về số lượng pizza cần mua
    cout << "So banh pizza can mua cho bua tiec: " << soLuongPizzaCanMua << endl;

    return 0;
}
