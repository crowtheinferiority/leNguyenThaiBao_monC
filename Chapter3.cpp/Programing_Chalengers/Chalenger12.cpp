/*Chuyển Đổi Celsius Sang Fahrenheit
Viết một chương trình chuyển đổi nhiệt độ từ độ Celsius sang độ Fahrenheit. Công thức là
\[ F = \frac{9}{5} \times C + 32 \]
Ở đây, \( F \) là nhiệt độ Fahrenheit và \( C \) là nhiệt độ Celsius.*/
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double doC, doF;
    cout << "Nhap nhiet do (Celsius): ";
    cin >> doC;
    doF = (9.0/5.0) * doC + 32;
    cout << "Nhiet do tinh theo (Fahrennheit): " << fixed << setprecision (2)<< doF << endl;
    return 0;
}