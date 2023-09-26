#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    char choice;

    cout << "Nhap mot so: ";
    cin >> value;
    cout << "Chuong trinh nay se chi tinh " << value;
    cout << " mu tu 0 den 10.\n";
    for (int count = 0; count <= 10; count++)
    {
        cout << value << " mu " << count << " la " << pow(value, count);
        cout << "\nNhap 'Q' hoac 'q' de thoat hoac bam phim khac ";
        cout << "de tiep tuc. ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
            break;
    }
    return 0;
}
