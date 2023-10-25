#include <iostream>
using namespace std;

int main() {
    // Khai báo và khởi tạo biến
    double gasTankCapacity = 20.0;
    double townMilesPerGallon = 23.5;
    double highwayMilesPerGallon = 28.9;
    double townDistance, highwayDistance;

    // Tính toán khoảng cách
    townDistance = gasTankCapacity * townMilesPerGallon;
    highwayDistance = gasTankCapacity * highwayMilesPerGallon;

    // Hiển thị kết quả
    cout << "Khoang cach/binh xang (tren thanh pho): " << townDistance << " dam" << endl;
    cout << "Khoang cach/binh xang (tren xa lo) : " << highwayDistance << " dam" << endl;

    return 0;
}
