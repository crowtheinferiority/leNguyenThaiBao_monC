#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    double minNum = (num1 < num2) ? num1 : num2;
    double maxNum = (num1 > num2) ? num1 : num2;

    cout << "The smaller number is: " << minNum << endl;
    cout << "The larger number is: " << maxNum << endl;

    return 0;
}
