#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int LUA_CHON_NGUOI_LON = 1,
              LUA_CHON_TRE_EM = 2,
              LUA_CHON_NGUOI_CA_LON_TUOI = 3,
              LUA_CHON_THOAT_CHUONG_TRINH = 4;

    const double NGUOI_LON = 40.0,
                 TRE_EM = 20.0,
                 NGUOI_CA_LON_TUOI = 30.0;

    int luaChon;
    int thang;
    double phi;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << "\n\t\tMenu Dang Ky Hoi Vien Phong Tap\n\n"
             << "1. Dang Ky Hoi Vien Nguoi Lon\n"
             << "2. Dang Ky Hoi Vien Tre Em\n"
             << "3. Dang Ky Hoi Vien Nguoi Ca Lon Tuoi\n"
             << "4. Thoat Chuong Trinh\n\n"
             << "Nhap lua chon cua ban: ";
        cin >> luaChon;

        while (luaChon < LUA_CHON_NGUOI_LON || luaChon > LUA_CHON_THOAT_CHUONG_TRINH)
        {
            cout << "Vui long nhap lua chon hop le: ";
            cin >> luaChon;
        }

        if (luaChon != LUA_CHON_THOAT_CHUONG_TRINH)
        {
            cout << "Dang ky trong bao nhieu thang? ";
            cin >> thang;

            switch (luaChon)
            {
            case LUA_CHON_NGUOI_LON:
                phi = thang * NGUOI_LON;
                break;
            case LUA_CHON_TRE_EM:
                phi = thang * TRE_EM;
                break;
            case LUA_CHON_NGUOI_CA_LON_TUOI:
                phi = thang * NGUOI_CA_LON_TUOI;
            }

            cout << "Tong phi la $" << phi << endl;
        }
    } while (luaChon != LUA_CHON_THOAT_CHUONG_TRINH);

    return 0;
}
