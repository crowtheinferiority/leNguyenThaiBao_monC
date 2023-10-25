    /*Một công ty điện tử bán các bo mạch vi mạch với lợi nhuận 35%. Hãy viết một chương trình tính giá bán của
     một bo mạch vi mạch có giá 14,95 đô la và hiển thị kết quả trên màn hình.*/
#include <iostream>
using namespace std;

int main() {
    double costPrice = 14.95; // Giá sản xuất bo vi mạch
    double profitPercentage = 0.35; // Lợi nhuận 35%

    // Tính giá bán
    double sellingPrice = costPrice + (costPrice * profitPercentage);

    // Hiển thị kết quả
    cout << "Gia ban cua bo vi mach la: $" << sellingPrice << endl;

    return 0;
}
