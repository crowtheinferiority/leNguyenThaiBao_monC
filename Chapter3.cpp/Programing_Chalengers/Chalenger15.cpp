/*Thuế Bất động sản
Một hạt thu thập thuế bất động sản dựa trên giá trị đánh giá của bất động sản, tức là 60 phần trăm giá 
trị thực của bất động sản. Nếu một mẫu đất có giá trị là $10,000, giá trị đánh giá của nó sẽ là $6,000.
Thuế bất động sản sau đó là 75¢ cho mỗi $100 của giá trị đánh giá.
Với một mẫu đất được đánh giá là $6,000, thuế sẽ là $45. Hãy viết một chương trình yêu cầu giá trị thực
của một mảnh đất và hiển thị giá trị đánh giá và thuế bất động sản.*/
#include <iostream>
using namespace std;

int main() {
    // Nhập giá trị thực của tài sản
    double actualValue;
    cout << "Nhap gia tri thuc cua tai san: $";
    cin >> actualValue;

    // Tính giá trị đánh giá
    double assessmentValue = 0.6 * actualValue;

    // Tính thuế tài sản
    double propertyTaxRate = 0.75;  // 75 xu cho moi 100$ gia tri thuc*
    double propertyTax = (assessmentValue / 100) * propertyTaxRate;

    // Hiển thị kết quả
    cout << "Gia tri danh gia la: $" << assessmentValue << endl;
    cout << "Thue bat dong san la: $" << propertyTax << endl;

    return 0;
}
