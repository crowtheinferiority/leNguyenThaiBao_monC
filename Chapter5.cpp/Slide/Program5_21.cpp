#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int numberOfDays;
    double sales;

    cout << "Trong bao nhieu ngay ban co doanh so ban hang? ";
    cin >> numberOfDays;

    outputFile.open("Sales.txt");

    for (int count = 1; count <= numberOfDays; count++)
    {
        cout << "Nhap so tien ban hang cho ngay thu "
             << count << ": ";
        cin >> sales;

        outputFile << sales << endl;
    }

    outputFile.close();
    cout << "Du lieu da duoc ghi vao Sales.txt\n";
    return 0;
}
