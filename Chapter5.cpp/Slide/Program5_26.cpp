#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dvdCount = 1;
    int numDVDs;
    double total = 0.0;
    char current;

    cout << "Co bao nhieu DVD dang duoc thue? ";
    cin >> numDVDs;

    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " mien phi!\n";
            continue;
        }
        cout << "DVD #" << dvdCount;
        cout << " co phai la phat hanh moi khong? (C/K) ";
        cin >> current;
        if (current == 'C' || current == 'c')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);

    cout << fixed << showpoint << setprecision(2);
    cout << "Tong so tien la: $" << total << endl;
    return 0;
}
