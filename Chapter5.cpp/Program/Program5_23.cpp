#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    inputFile.open("BadListOfNumbers.txt");

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
