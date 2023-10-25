/*Tính toán đất đai
Một mẫu đất tương đương với 43.560 feet vuông. Viết chương trình tính
số mẫu đất trong một khu đất có diện tích 391.876 feet vuông*/
#include <iostream>
using namespace std;
int main(){
    const double onepiece = 43.560;
    double dienTichKhuDat = 391.876, soMauDat;
    //tinh so mau dat 
    soMauDat = dienTichKhuDat/onepiece;
    cout << "So mau dat trong khu dat do la: " << soMauDat <<" mau.\n";
    return 0;
}