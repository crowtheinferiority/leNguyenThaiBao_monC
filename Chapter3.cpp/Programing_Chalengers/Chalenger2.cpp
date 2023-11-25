#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double ClasaA = 15.5, ClassB = 12.2, ClassC = 9.9;
    double veA, veB, veC, tongDoanhThu;
    cout << "So ve hang A ban duoc: ";
    cin >> veA;
    cout << "So ve hang B ban duoc: ";
    cin >> veB;
    cout << "So ve hang C ban duoc: ";
    cin >> veC;
    tongDoanhThu = veA * ClasaA + veB * ClassB + veC * ClassC;
    cout << "Tong doanh thu ban ve la: $" << fixed << setprecision(2) << tongDoanhThu << endl;
    return 0;
}