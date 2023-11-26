#include <iostream>
using namespace std;

int main() {
    double length1, width1, length2, width2;
    double area1, area2;

    cout << "Enter the length and width of the first rectangle: ";
    cin >> length1 >> width1;
    area1 = length1 * width1;

    cout << "Enter the length and width of the second rectangle: ";
    cin >> length2 >> width2;
    area2 = length2 * width2;

    if (area1 > area2) {
        cout << "The first rectangle has a greater area.";
    } else if (area1 < area2) {
        cout << "The second rectangle has a greater area.";
    } else {
        cout << "The areas of the two rectangles are the same.";
    }

    return 0;
}
