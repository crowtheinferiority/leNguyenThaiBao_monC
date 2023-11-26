#include <iostream>
#include <iomanip>

// Function to convert Fahrenheit to Celsius
double celsius(int fahrenheit) {
    return 5.0 * (fahrenheit - 32) / 9;
}

int main() {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Fahrenheit\tCelsius" << std::endl;
    for (int fahrenheit = 0; fahrenheit <= 20; ++fahrenheit) {
        double celsiusTemp = celsius(fahrenheit);
        std::cout << fahrenheit << "\t\t" << celsiusTemp << std::endl;
    }

    return 0;
}
