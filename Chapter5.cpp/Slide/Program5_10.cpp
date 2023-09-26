#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1, // Giá trị bắt đầu
              MAX_NUMBER = 10; // Giá trị kết thúc
    int num;

    cout << "So so binh phuong cua so\n";
    cout << "-------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
