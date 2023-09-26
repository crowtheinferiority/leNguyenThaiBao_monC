#include <iostream>
using namespace std;

int main() // Them dau ngoac de chi ra day la mot ham
{
    int diem1, diem2, diem3; // Khai bao ba bien de luu tru diem
    double trungBinh; // Khai bao bien de luu tru diem trung binh
    char lapLai; // Khai bao bien de luu tru 'Y' hoac 'N' tu nguoi dung

    do
    {
        // Nhap ba diem
        cout << "Nhap 3 diem va toi se tinh diem trung binh: \n";
        cin >> diem1 >> diem2 >> diem3;

        // Tinh va hien thi diem trung binh
        trungBinh = (diem1 + diem2 + diem3) / 3.0; // Them dau ngoac de dam bao thu tu thuc hien phep tinh dung
        cout << "Diem trung binh la " << trungBinh << "\n";

        // Nguoi dung co muon tinh trung binh cho mot bo so khac khong
        cout << "Ban co muon tinh trung binh cho mot bo so khac khong? (Y/N): ";
        cin >> lapLai;
    } while (lapLai == 'Y' || lapLai == 'y');

    return 0;
}
