#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt"); // Open the file
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    int number;
    int count = 0;
    double sum = 0.0;

    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();

    if (count == 0) {
        cout << "No numbers found in the file." << endl;
    } else {
        double average = sum / count;

        cout << "Number of numbers in the file: " << count << endl;
        cout << "Sum of all the numbers in the file: " << sum << endl;
        cout << "Average of all the numbers in the file: " << average << endl;
    }

    return 0;
}
