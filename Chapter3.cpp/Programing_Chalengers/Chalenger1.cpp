#include <iostream>
using namespace std;
int main (){
    double soLitXang, soDamDiDuoc;
    cout << "So lit xang ma xe co the chua la: " ;
    cin >> soLitXang;
    cout << "So Dam ma xe di duoc khi day binh xang la: ";
    cin >> soDamDiDuoc;
    double soDamTrenLitXang;
    soDamTrenLitXang = soDamDiDuoc / soLitXang;
    cout << "So dam co the di duoc tren moi lit xang la: " << soDamTrenLitXang;
    return 0;
}