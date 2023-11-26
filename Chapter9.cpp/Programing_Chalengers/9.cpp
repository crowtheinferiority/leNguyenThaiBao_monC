#include <iostream>

double findMedian(int* arr, int n) {
    if(n % 2 == 0) {
        return (*(arr + n/2 - 1) + *(arr + n/2)) / 2.0;
    } else {
        return *(arr + n/2);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Median of the array is " << findMedian(arr, n);
    return 0;
}
