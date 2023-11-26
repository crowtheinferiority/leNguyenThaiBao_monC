#include <iostream>
using namespace std;

int main() {
    double wavelength;

    cout << "Enter the wavelength of an electromagnetic wave in meters: ";
    cin >> wavelength;

    if (wavelength >= 1E-2) {
        cout << "The wave is a radio wave.";
    } else if (wavelength >= 1E-3) {
        cout << "The wave is a microwave.";
    } else if (wavelength >= 7E-7) {
        cout << "The wave is an infrared wave.";
    } else if (wavelength >= 4E-7) {
        cout << "The wave is visible light.";
    } else if (wavelength >= 1E-8) {
        cout << "The wave is an ultraviolet wave.";
    } else if (wavelength >= 1E-11) {
        cout << "The wave is an X-ray.";
    } else {
        cout << "The wave is a gamma ray.";
    }

    return 0;
}
