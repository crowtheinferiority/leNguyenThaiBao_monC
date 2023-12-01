#include <iostream>
using namespace std;

class MayLyTam {
private:
    int luonxang;
    double congsuat;
    double thoigian;

public:
    void nhap() {
        cout << "Nhap thoi gian hoat dong: ";
        cin >> thoigian;
        cout << "Nhap luong xang: ";
        cin >> luonxang;
        cout << "Nhap cong suat loc cua may: ";
        cin >> congsuat;
    }

    void setTgian(double t) {
        thoigian = t;
    }

    double getThoiGian() {
        return this->thoigian;
    }

    static long long DON_GIA_THUE_MayLyTam;
    
    float tinhLuongNuoc() {
        return this->getThoiGian() * congsuat;
    }

    long tinhChiPhiThueMoiMay() {
        return DON_GIA_THUE_MayLyTam * static_cast<long>(this->getThoiGian());
    }

    long tinhChiPhi() {
        return tinhChiPhiThueMoiMay() + luonxang * 20000;
    }
};

class MayXucTac {
private:
    int luonghoachat;
    double congsuat;
    double thoigian;

public:
    void nhap() {
        cout << "Nhap thoi gian hoat dong: ";
        cin >> thoigian;
        cout << "Nhap luong hoa chat: ";
        cin >> luonghoachat;
        cout << "Nhap cong suat loc cua may: ";
        cin >> congsuat;
    }

    void setTgian(double t) {
        thoigian = t;
    }

    double getThoiGian() {
        return this->thoigian;
    }

    static long long DON_GIA_THUE_MayXucTac;

    float CongSuatThucTe() {
        if (this->getThoiGian() >= 10) {
            return congsuat * (luonghoachat / 100) / (this->getThoiGian() / 10);
        } else {
            return congsuat * (luonghoachat / 100);
        }
    }

    long tinhChiPhiThueMoiMay() {
        return DON_GIA_THUE_MayXucTac * static_cast<long>(this->getThoiGian());
    }

    float tinhLuongNuoc() {
        return this->getThoiGian() * CongSuatThucTe();
    }

    long tinhChiPhi() {
        return tinhChiPhiThueMoiMay() + luonghoachat * 10000;
    }
};

long long MayLyTam::DON_GIA_THUE_MayLyTam = 50000;
long long MayXucTac::DON_GIA_THUE_MayXucTac = 80000;

int main() {
    int m, n;
    double nuoc;
    
    cout << "Nhap vao luong nuoc trong ao: ";
    cin >> nuoc;
    
    cout << "Nhap so luong may xuc tac: ";
    cin >> m;

    cout << "Nhap so luong may ly tam: ";
    cin >> n;

    long long chiphixuctac = 0;
    long luong_nuoc_xuc_tac = 0;
    long long chiphilytam = 0;
    long luong_nuoc_ly_tam = 0;

    for (int i = 1; i <= m; i++) {
        MayXucTac a;
        a.nhap();
        chiphixuctac += a.tinhChiPhi();
        luong_nuoc_xuc_tac += a.tinhLuongNuoc();
    }

    for (int i = 1; i <= n; i++) {
        MayLyTam b;
        b.nhap();
        chiphilytam += b.tinhChiPhi();
        luong_nuoc_ly_tam += b.tinhLuongNuoc();
    }

    long long tongchiphi = chiphilytam + chiphixuctac;
    long long tongluongnuoc = luong_nuoc_ly_tam + luong_nuoc_xuc_tac;

    if (tongluongnuoc >= nuoc) {
        cout << "Ao da duoc loc het" << endl;
    } else {
        cout << "Ao chua duoc loc het" << endl;
    }

    cout << "Tong chi phi la " << tongchiphi;

    return 0;
}
