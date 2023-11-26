#include <iostream>

int* reverseArray(int* arr, int n) {
    int* reversedArr = new int[n];
    for(int i = 0; i < n; i++) {
        *(reversedArr + i) = *(arr + n - 1 - i);
    }
    return reversedArr;
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
    int* reversedArr = reverseArray(arr, n);
    std::cout << "Reversed array: ";
    printArray(reversedArr, n);
    delete[] reversedArr;
    return 0;
}
