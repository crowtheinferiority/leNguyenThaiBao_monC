/*Thuế Bất động sản cho Người cao tuổi
Quận Madison cung cấp một miễn giảm $5,000 cho những người cao tuổi sở hữu nhà. Ví dụ, nếu ngôi nhà của
một người cao tuổi được định giá là $158,000, giá trị đánh giá của nó sẽ là $94,800, như đã giải thích 
ở trên. Tuy nhiên, người này chỉ phải trả thuế trên $89,800. Ở mức thuế năm ngoái là $2.64 cho mỗi $100 
giá trị đánh giá, số thuế bất động sản sẽ là $2,370.72. Ngoài lợi ích về thuế, người cao tuổi được phép 
thanh toán thuế bất động sản của họ thành bốn đợt bằng nhau. Số tiền phải trả hàng quý cho tài sản này 
sẽ là $592.68. Hãy viết một chương trình yêu cầu người dùng nhập giá trị thực của một mảnh đất và tỷ lệ 
thuế hiện tại cho mỗi $100 giá trị đánh giá. Chương trình sau đó sẽ tính toán và báo cáo số thuế bất 
động sản hàng năm mà một chủ nhà cao tuổi sẽ phải trả cho tài sản này và số tiền hóa đơn thuế hàng 
quý sẽ là bao nhiêu.*/
#include <iostream>
using namespace std;

int main() {
    // Nhập giá trị thực của tài sản và tỷ lệ thuế
    double actualValue, taxRate;
    cout << "Nhap gia tri thuc cua tai san: $";
    cin >> actualValue;
    cout << "Nhap ti le thue voi moi 100$ gia tri thuc: ";
    cin >> taxRate;

    // Tính giá trị đánh giá và giảm miễn giảm cho người cao tuổi
    double assessmentValue = 0.6 * actualValue;
    double seniorExemption = 5000;
    double taxableValue = assessmentValue - seniorExemption;

    // Tính thuế bất động sản hàng năm và hàng quý
    double annualPropertyTax = (taxableValue / 100) * taxRate;
    double quarterlyTaxBill = annualPropertyTax / 4;

    // Hiển thị kết quả
    cout << "Gia tri danh gia: $" << assessmentValue << endl;
    cout << "Gia tri chiu thue sau khi mien tru doi voi nguoi cao tuoi: $" << taxableValue << endl;
    cout << "Thue bat dong san hang nam danh cho chu nha cao: $" << annualPropertyTax << endl;
    cout << "Hoa don thue hang quy la: $" << quarterlyTaxBill << endl;

    return 0;
}
