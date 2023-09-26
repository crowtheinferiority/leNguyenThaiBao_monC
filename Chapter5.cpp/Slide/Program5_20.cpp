#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    inFile.open("NumericData.txt");

    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    inFile.close();

    sum = value1 + value2 + value3;

    cout << "Duoi day la 3 so:\n"
         << value1 << " " << value2
         << " " << value3 << endl;

    cout << "Tong cua 3 so la: " << sum << endl;

    return 0;
}
