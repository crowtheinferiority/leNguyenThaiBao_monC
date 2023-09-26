#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng để ghi dữ liệu vào tệp
    string name1, name2, name3; // Biến để lưu trữ tên của ba người bạn

    // Mở một tệp đầu ra.
    outputFile.open("Friends.txt");

    // Nhận tên của ba người bạn.
    cout << "Nhap ten cua 3 nguoi ban: \n";
    cout << "Ban thu 1: ";
    cin >> name1;
    cout << "Ban thu 2: ";
    cin >> name2;
    cout << "Ban thu 3: ";
    cin >> name3;

    // Ghi tên vào tệp.
    outputFile << name1 << endl;
    outputFile << name2 << endl;
    outputFile << name3 << endl;
    cout << "Cac ten da duoc luu vao tep.\n";

    // Đóng tệp.
    outputFile.close();
    return 0;
}

