#include <iostream>

int* expandArray(int* arr, int n) {
    int* expandedArr = new int[2*n];
    for(int i = 0; i < 2*n; i++) {
        if(i < n) {
            *(expandedArr + i) = *(arr + i);
        } else {
            *(expandedArr + i) = 0;
        }
    }
    return expandedArr;
}

void printArray(int* arr, int n) {
    for(int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Original array: ";
    printArray(arr, n);
    int* expandedArr = expandArray(arr, n);
    std::cout << "Expanded array: ";
    printArray(expandedArr, 2*n);
    delete[] expandedArr;
    return 0;
}
