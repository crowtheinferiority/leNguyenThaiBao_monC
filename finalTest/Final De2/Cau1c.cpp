#include <iostream>

using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    // Hàm tạo mặc định, gán giá trị cho phân số 
    PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }

    // Hàm tạo với tham số
    PhanSo(const int& tu, const int& mau) {
        this->tu = tu;
        this->mau = mau;
        if (this->mau == 0) {
            cout << "Mau khong duoc bang 0\n";
            this->tu = 0;
            this->mau = 1;  // Chỉnh sửa, nếu mau = 0 thì đặt mau = 1 
        }
    }

    // Toán tử cộng để cộng hai đối tượng PhanSo
    PhanSo operator+ (const PhanSo& ps) {
        PhanSo newPhanSo(this->tu * ps.mau + this->mau * ps.tu, this->mau * ps.mau);
        return newPhanSo;
    }

    // Toán tử cộng và gán để cộng một đối tượng PhanSo vào đối tượng hiện tại
    PhanSo operator+=(const PhanSo& ps) {
        this->tu = this->tu * ps.mau + this->mau * ps.tu;
        this->mau *= ps.mau;
        return *this;
    }

    // Toán tử cộng để cộng một số nguyên vào một đối tượng PhanSo
    PhanSo operator+(const int& iNum) {
        PhanSo newPhanSo(this->tu + iNum * this->mau, this->mau);
        return newPhanSo;
    }

    // Toán tử tăng lên 1 (tiền tố)
    PhanSo operator++() {
        this->tu += this->mau;
        return *this;
    }

    // Toán tử chuyển đổi sang kiểu int
    operator int() {
        return this->tu / this->mau;
    }

    // Hàm bạn để nạp chồng toán tử << để hiển thị đối tượng PhanSo
    friend ostream& operator<<(ostream& os, const PhanSo& ps) {
        os << ps.tu << "/" << ps.mau;
        return os; // bây giờ thì os có thể thay thế cout 
    }

    // Hàm hủy
    ~PhanSo() {
        this->tu = 0;
        this->mau = 1;
    }
};

int main() {
    // Test code ở đây nếu cần thiết
    return 0;
}
