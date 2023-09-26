#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng để ghi dữ liệu vào tệp
    outputFile.open("demofile.txt"); // Mở tệp có tên "demofile.txt"

    cout << "Bay gio dang ghi du lieu vao tep.\n";

    // Ghi bon ten vao tep
    outputFile << "Bach\n";
    outputFile << "Beethoven\n";
    outputFile << "Mozart\n";
    outputFile << "Schubert\n";

    // Dong tep
    outputFile.close();

    cout << "Hoan thanh.\n";
    return 0;
}
