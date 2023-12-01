#include <iostream>
#include <string>

// Lớp trừu tượng đại diện cho một loại đồ ăn
class MonAn {
public:
    // Phương thức thuần ảo để mô tả cách nấu ăn ( chú í virtual)
    virtual void nauAn() const = 0;

    // Phương thức thông thường
    void hienThiThongTin() const {
        std::cout << "Đây là một loại đồ ăn." << std::endl;
    }
};

// Lớp con kế thừa từ lớp trừu tượng
class BanhMi : public MonAn {
public:
    // Triển khai phương thức thuần ảo
    void nauAn() const override {
        std::cout << "Đang làm bánh mì ngon." << std::endl;
    }
};

// Lớp con khác kế thừa từ lớp trừu tượng
class Sushi : public MonAn {
public:
    // Triển khai phương thức thuần ảo
    void nauAn() const override {
        std::cout << "Đang làm sushi tươi ngon." << std::endl;
    }
};

int main() {
    // Không thể tạo đối tượng từ lớp trừu tượng
    // MonAn* monAn = new MonAn(); // Lỗi

    BanhMi banhMi;
    Sushi sushi;

    // Gọi phương thức thông thường
    banhMi.hienThiThongTin();

    // Gọi phương thức thuần ảo qua đối tượng con
    banhMi.nauAn(); // Đang làm bánh mì ngon.

    sushi.hienThiThongTin();
    sushi.nauAn(); // Đang làm sushi tươi ngon.

    return 0;
}
