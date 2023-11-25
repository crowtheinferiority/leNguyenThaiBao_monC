#include <iostream>
#include <string>

using namespace std;

int main() {
    // Nhập thông tin từ người dùng
    string tenNguoi;
    int tuoi;
    string tenThanhPho;
    string tenTruongDaiHoc;
    string ngheNghiep;
    string loaiDongVat;
    string tenThuCung;

    cout << "Nhap ten cua ban: ";
    getline(cin, tenNguoi);

    cout << "Nhap tuoi cua ban: ";
    cin >> tuoi;
    cin.ignore();  // Loại bỏ dấu newline còn lại trong buffer

    cout << "Nhap ten thanh pho: ";
    getline(cin, tenThanhPho);

    cout << "Nhap ten truong dai hoc: ";
    getline(cin, tenTruongDaiHoc);

    cout << "Nhap nghe nghiep cua ban: ";
    getline(cin, ngheNghiep);

    cout << "Nhap loai dong vat: ";
    getline(cin, loaiDongVat);

    cout << "Nhap ten thu cung: ";
    getline(cin, tenThuCung);

    // Hiển thị câu chuyện với thông tin của người dùng
    cout << "Co mot nguoi ten la " << tenNguoi << " song tai " << tenThanhPho << "."
         << " O tuoi " << tuoi << ", " << tenNguoi << " di hoc tai truong dai hoc " << tenTruongDaiHoc << "."
         << " Sau khi tot nghiep, " << tenNguoi << " bat dau cong viec lam nghe " << ngheNghiep << "."
         << " Sau do, " << tenNguoi << " nhan nuoi mot con " << loaiDongVat << " ten la " << tenThuCung << "."
         << " Ca hai song hanh phuc mai mai!" << endl;

    return 0;
}
