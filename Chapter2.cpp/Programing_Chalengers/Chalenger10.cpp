/*
Miles per Gallon
Xe ô tô chứa 15 gallon xăng và có thể di chuyển 375 dặm trước khi cần đổ xăng. Hãy viết 
một chương trình tính toán số dặm trên mỗi gallon (MPG) mà chiếc ô tô đó đạt được và 
hiển thị kết quả lên màn hình.*/
#include <iostream>
using namespace std;

int main() {
    // Khai báo biến và khởi tạo giá trị ban đầu
    double gallonsOfGasoline = 15.0;
    double milesDriven = 375.0;
    double milesPerGallon;

    // Tính toán số dặm trên mỗi gallon
    milesPerGallon = milesDriven / gallonsOfGasoline;

    // Hiển thị kết quả
    cout << "So dam tren moi gallon (MPG) la: " << milesPerGallon << endl;

    return 0;
}

