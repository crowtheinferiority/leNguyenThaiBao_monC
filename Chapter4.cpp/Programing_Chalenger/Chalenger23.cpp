#include <iostream>

int main() {
    int choice;
    double radius, length, width, base, height;

    std::cout << "Geometry Calculator\n";
    std::cout << "1. Calculate the Area of a Circle\n";
    std::cout << "2. Calculate the Area of a Rectangle\n";
    std::cout << "3. Calculate the Area of a Triangle\n";
    std::cout << "4. Quit\n";
    std::cout << "Enter your choice (1-4):\n";
    std::cin >> choice;

    if (choice < 1 || choice > 4) {
        std::cout << "Invalid choice!\n";
        return 1;
    }

    switch (choice) {
        case 1:
            std::cout << "Enter the radius of the circle:\n";
            std::cin >> radius;
            if (radius < 0) {
                std::cout << "Invalid radius!\n";
                return 1;
            }
            std::cout << "The area of the circle is " << 3.14159 * radius * radius << ".\n";
            break;
        case 2:
            std::cout << "Enter the length and width of the rectangle:\n";
            std::cin >> length >> width;
            if (length < 0 || width < 0) {
                std::cout << "Invalid length or width!\n";
                return 1;
            }
            std::cout << "The area of the rectangle is " << length * width << ".\n";
            break;
        case 3:
            std::cout << "Enter the base and height of the triangle:\n";
            std::cin >> base >> height;
            if (base < 0 || height < 0) {
                std::cout << "Invalid base or height!\n";
                return 1;
            }
            std::cout << "The area of the triangle is " << base * height * 0.5 << ".\n";
            break;
        case 4:
            return 0;
    }

    return 0;
}
