#include <iostream>

int* allocateArray(int size) {
    int* arr = new int[size];
    return arr;
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    int* arr = allocateArray(size);

    // Don't forget to delete the array when you're done
    delete[] arr;

    return 0;
}
