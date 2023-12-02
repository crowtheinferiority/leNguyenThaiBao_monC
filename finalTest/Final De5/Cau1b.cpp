#include <iostream>
using namespace std;

// Định nghĩa lớp A
class A {
public:
    // Constructor của lớp A
    A() {
        // Cấp phát bộ nhớ cho mảng a và khởi tạo giá trị
        a = new int[3];
        for (int i = 0; i < 3; i++)
            a[i] = i + 1;
    }

    // Destructor của lớp A để giải phóng bộ nhớ
    ~A() {
        delete[] a;
    }

    // Hàm copy dữ liệu từ một đối tượng A khác (other)
    void copydulieu(const A& other) {
        for (int i = 0; i < 3; i++) {
            a[i] = other.a[i];
        }
    }

private:
    int* a; // Con trỏ đến mảng a
};

// Hàm init nhận một đối tượng A và thực hiện việc sao chép dữ liệu từ một đối tượng khác
void init(A& a) {
    A b;            // Tạo một đối tượng A mới (b)
    a.copydulieu(b); // Sao chép dữ liệu từ b vào đối tượng a
}

int main() {
    A obj;   // Tạo một đối tượng A mới (obj)
    init(obj); // Gọi hàm init để sao chép dữ liệu từ một đối tượng khác vào obj
    // Lúc này, destructor của obj sẽ tự động được gọi khi main kết thúc,
    // giải phóng bộ nhớ được cấp phát cho mảng a trong đối tượng obj.
    return 0;
}

