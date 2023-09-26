#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int KPH_BAT_DAU = 60, // Tốc độ bắt đầu
              KPH_KET_THUC = 130, // Tốc độ kết thúc
              BUOC_TANG = 10; // Bước tăng tốc độ

    const double HE_SO_CHUYEN_DOI = 0.6214;

    int kph;
    double mph;

    cout << fixed << showpoint << setprecision(1);

    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    for (kph = KPH_BAT_DAU; kph <= KPH_KET_THUC; kph += BUOC_TANG)
    {
        mph = kph * HE_SO_CHUYEN_DOI;
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
