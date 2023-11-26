#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    cout << "Nhap ten tep: ";
    cin >> filename;

    inputFile.open(filename);

    if (inputFile)
    {
        while (inputFile >> number)
        {
            cout << number << endl;
        }
        inputFile.close();
    }
    else
    {
        cout << "Loi khi mo tep.\n";
    }

    return 0;
}
