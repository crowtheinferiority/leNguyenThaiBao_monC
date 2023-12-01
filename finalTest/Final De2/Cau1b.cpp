// Tap tin PhanSo.h
#ifndef _PhanSo_h
#define _PhanSo_h
#include <iostream>
using namespace std;

class PhanSo {
private:
    int tu, mau;

public:
    PhanSo(); //contractor
		PhanSo(const int&,const int&);
		PhanSo operator+(const PhanSo&);
		PhanSo operator+=(const PhanSo&);
		PhanSo operator+(const int&);
		PhanSo operator++(); // nap chong toan tu de thuc hien cac phep tinh cua phan so
		operator int(int);
		friend ostream& operator<<(ostream&, const PhanSo&); //lenh xuat ra man hinh, giong cout
		~PhanSo();
}
#endif
