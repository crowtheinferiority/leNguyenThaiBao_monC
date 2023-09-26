#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the file
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    string name;
    int count = 0;

    cout << "Students in line:" << endl;

    while (getline(inputFile, name)) {
        count++;
        cout << count << ". " << name << endl;
    }

    inputFile.close();

    if (count == 0) {
        cout << "No names found in the file." << endl;
    }

    return 0;
}
