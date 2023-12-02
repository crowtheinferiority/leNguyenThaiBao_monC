#include <iostream>
#include <vector>
using namespace std;

// Lớp cơ sở Sap
class Sap {
protected:
    int _stt;
    float _dt;
    long _doanhThu;

public:
    static long DON_GIA_THUE;

    // Hàm ảo để tính tiền thuê
    virtual long tinhTienThue() {
        return DON_GIA_THUE * this->_dt;
    }

    // Hàm ảo để tính thuế doanh thu
    virtual long tinhThueDoanhThu() = 0;

    // Hàm ảo để tính tổng tiền
    virtual long tinhTongTien() = 0;

    // Hàm ảo để nhập thông tin
    virtual void nhapThongTin() {
        cin >> this->_stt >> this->_dt >> this->_doanhThu;
    }

    // Destructor ảo
    virtual ~Sap() {
        this->_stt = 0;
        this->_dt = 0;
        this->_doanhThu = 0;
    }
};

long Sap::DON_GIA_THUE = 40000000;

// Lớp SapThucPham kế thừa từ Sap
class SapThucPham : public Sap {
private:
    long _phiDongLanh;

public:
    static float PHAN_TRAM_THUE_SAP_THUC_PHAM;

    // Tính thuế doanh thu cho SapThucPham
    long tinhThueDoanhThu() {
        return (float)PHAN_TRAM_THUE_SAP_THUC_PHAM * this->_doanhThu;
    }

    // Tính tổng tiền cho SapThucPham
    long tinhTongTien() {
        return this->_phiDongLanh + this->tinhThueDoanhThu() + this->tinhTienThue();
    }

    // Nhập thông tin cho SapThucPham
    void nhapThongTin() {
        Sap::nhapThongTin();
        cin >> _phiDongLanh;
    }
};

float SapThucPham::PHAN_TRAM_THUE_SAP_THUC_PHAM = 0.05;

// Lớp SapQuanAo kế thừa từ Sap
class SapQuanAo : public Sap {
public:
    static float PHAN_TRAM_THUE_SAP_QUAN_AO;

    // Tính thuế doanh thu cho SapQuanAo
    long tinhThueDoanhThu() {
        return (float)PHAN_TRAM_THUE_SAP_QUAN_AO * this->_doanhThu;
    }

    // Tính tổng tiền cho SapQuanAo
    long tinhTongTien() {
        return this->tinhThueDoanhThu() + this->tinhTienThue();
    }
};

float SapQuanAo::PHAN_TRAM_THUE_SAP_QUAN_AO = 0.1;

// Lớp SapTrangSuc kế thừa từ Sap
class SapTrangSuc : public Sap {
public:
    static long GIOI_HAN_DOANH_THU;
    static float PHAN_TRAM_THUE_DUOI_GION_HAN;
    static float PHAN_TRAM_THUE_TREN_GION_HAN;

    // Tính thuế doanh thu cho SapTrangSuc
    long tinhThueDoanhThu() {
        if (this->_doanhThu < GIOI_HAN_DOANH_THU) {
            return PHAN_TRAM_THUE_DUOI_GION_HAN * this->_doanhThu;
        } else {
            return PHAN_TRAM_THUE_TREN_GION_HAN * this->_doanhThu;
        }
    }

    // Tính tổng tiền cho SapTrangSuc
    long tinhTongTien() {
        return this->tinhThueDoanhThu() + this->tinhTienThue();
    }
};

long SapTrangSuc::GIOI_HAN_DOANH_THU = 100000000;
float SapTrangSuc::PHAN_TRAM_THUE_DUOI_GION_HAN = 0.2;
float SapTrangSuc::PHAN_TRAM_THUE_TREN_GION_HAN = 0.3;

// Lớp QuanLyDanhSach quản lý danh sách các đối tượng Sap
class QuanLyDanhSach {
private:
    vector<Sap*> _ds;

public:
    // Nhập thông tin cho từng đối tượng trong danh sách
    void nhapThongTin() {
        cout << "Nhap so luong sap duoc thue:";
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int choice;
            cout << "1-Sap Thuc Pham, 2-SapQuanAo, 3-SapTrangSuc\n";
            cin >> choice;
            Sap* p = NULL;
            if (choice == 1) {
                p = new SapThucPham();
            } else if (choice == 2) {
                p = new SapQuanAo();
            } else if (choice == 3) {
                p = new SapTrangSuc();
            } else {
                cout << "Nhap sai! Nhap lai!\n";
                i--;
                continue;
            }
            this->_ds.push_back(p);
            this->_ds[i]->nhapThongTin();
        }
    }

    // Tính tổng tiền của tất cả đối tượng trong danh sách
    long tinhTongTien() {
        long sum = 0;
        for (int i = 0; i < this->_ds.size(); i++) {
            sum += this->_ds[i]->tinhTongTien();
        }
        return sum;
    }
};
