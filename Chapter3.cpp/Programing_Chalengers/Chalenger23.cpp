#include <iostream>

using namespace std;

int main() {
    // Chi tiết giao dịch mua
    int soLuongCoPhieuMua = 1000;
    double giaMuaPerCoPhieu = 45.50;
    double tyLeHoaHongMua = 0.02;

    // Chi tiết giao dịch bán
    int soLuongCoPhieuBan = 1000;
    double giaBanPerCoPhieu = 56.90;
    double tyLeHoaHongBan = 0.02;

    // Tính toán tổng chi phí mua
    double tongChiPhiMua = soLuongCoPhieuMua * giaMuaPerCoPhieu;
    double hoaHongMua = tongChiPhiMua * tyLeHoaHongMua;

    // Tính toán tổng chi phí bán
    double tongChiPhiBan = soLuongCoPhieuBan * giaBanPerCoPhieu;
    double hoaHongBan = tongChiPhiBan * tyLeHoaHongBan;

    // Tính toán lợi nhuận
    double loiNhuan = tongChiPhiBan - tongChiPhiMua - hoaHongMua - hoaHongBan;

    // Hiển thị thông tin
    cout << "So tien Joe tra khi mua co phieu: $" << tongChiPhiMua << endl;
    cout << "Hoa hong Joe tra cho moi gioi khi mua: $" << hoaHongMua << endl;
    cout << "So tien Joe ban co phieu: $" << tongChiPhiBan << endl;
    cout << "Hoa hong Joe tra cho moi gioi khi ban: $" << hoaHongBan << endl;

    cout << "Loi nhuan (hoac thua lo): $" << loiNhuan << endl;

    return 0;
}
