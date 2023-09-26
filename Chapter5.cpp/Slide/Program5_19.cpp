// Chương trình này đọc dữ liệu từ một tệp.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile; // Đối tượng để đọc dữ liệu từ tệp
    string name; // Biến để lưu trữ tên

    inputFile.open("Friends.txt"); // Mở tệp "Friends.txt" để đọc dữ liệu
    cout << "Dang doc du lieu tu ten tep.\n";

    inputFile >> name; // Đọc tên 1 từ tệp
    cout << name << endl; // Hiển thị tên 1

    inputFile >> name; // Đọc tên 2 từ tệp
    cout << name << endl; // Hiển thị tên 2

    inputFile >> name; // Đọc tên 3 từ tệp
    cout << name << endl; // Hiển thị tên 3

    inputFile.close(); // Đóng tệp
    return 0;
}
