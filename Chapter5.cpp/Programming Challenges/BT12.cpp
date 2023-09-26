#include <iostream>
using namespace std;

int main() {
    int celsius;

    cout << "Celsius to Fahrenheit Conversion Table\n";
    cout << "Celsius\tFahrenheit\n";
    cout << "-------------------\n";

    for (celsius = 0; celsius <= 20; celsius++) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << celsius << "\t" << fahrenheit << endl;
    }

    return 0;
}
