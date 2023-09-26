#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents; // Số học sinh
    int numTests;    // Số bài kiểm tra cho mỗi học sinh
    double total;    // Biến tích lũy tổng số điểm
    double average;  // Điểm trung bình

    // Thiết lập định dạng hiển thị cho số
    cout << fixed << showpoint << setprecision(1);

    // Nhận số lượng học sinh
    cout << "Chuong trinh tinh diem trung binh bai kiem tra.\n";
    cout << "Ban co bao nhieu hoc sinh? ";
    cin >> numStudents;

    // Nhận số lượng bai kiem tra cho mỗi hoc sinh
    cout << "Moi hoc sinh co bao nhieu bai kiem tra? ";
    cin >> numTests;

    // Tính diem trung binh cho từng hoc sinh
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0; // Khởi tạo biến tích lũy
        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Nhap diem bai kiem tra " << test << " cua hoc sinh " << student << ": ";
            cin >> score;
            total += score;
        }
        average = total / numTests;
        cout << "Diem trung binh cua hoc sinh " << student;
        cout << " la " << average << ".\n\n";
    }

    return 0;
}
