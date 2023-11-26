#include <iostream>

// Function to get the length of the rectangle
double getLength() {
    double length;
    std::cout << "Enter the rectangle's length: ";
    std::cin >> length;
    return length;
}

// Function to get the width of the rectangle
double getWidth() {
    double width;
    std::cout << "Enter the rectangle's width: ";
    std::cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double getArea(double length, double width) {
    return length * width;
}

// Function to display the data
void displayData(double length, double width, double area) {
    std::cout << "The rectangle's length is: " << length << std::endl;
    std::cout << "The rectangle's width is: " << width << std::endl;
    std::cout << "The rectangle's area is: " << area << std::endl;
}

int main() {
    double length = getLength();
    double width = getWidth();
    double area = getArea(length, width);
    displayData(length, width, area);
    
    return 0;
}
