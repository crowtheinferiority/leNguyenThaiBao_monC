#include <iostream>

int* shiftElements(int* arr, int n) {
    int* shiftedArr = new int[n+1];
    *shiftedArr = 0;
    for(int i = 0; i < n; i++) {
        *(shiftedArr + i + 1) = *(arr + i);
    }
    return shiftedArr;
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
    int* shiftedArr = shiftElements(arr, n);
    std::cout << "Shifted array: ";
    printArray(shiftedArr, n+1);
    delete[] shiftedArr;
    return 0;
}
