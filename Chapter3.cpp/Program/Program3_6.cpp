#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double test1, test2, test3; // Để lưu trữ các điểm
    double average; // Để lưu trữ điểm trung bình

    // Nhận ba điểm kiểm tra.
    cout << "Nhap diem kiem tra thu 1: ";
    cin >> test1;
    cout << "Nhap diem kiem tra thu 2: ";
    cin >> test2;
    cout << "Nhap diem kiem tra thu 3: ";
    cin >> test3;

    // Tính điểm trung bình của ba điểm.
    average = (test1 + test2 + test3) / 3.0;

    // Hiển thị điểm trung bình.
    cout << "Diem trung binh la: " << average << endl;
    return 0;
}
