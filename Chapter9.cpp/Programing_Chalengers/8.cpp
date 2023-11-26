#include <iostream>
#include <map>

int findMode(int* arr, int n) {
    std::map<int, int> freqMap;
    for(int i = 0; i < n; i++) {
        freqMap[*(arr + i)]++;
    }
    int mode = -1;
    int maxCount = 0;
    for(auto i = freqMap.begin(); i != freqMap.end(); i++) {
        if(i->second > maxCount) {
            maxCount = i->second;
            mode = i->first;
        }
    }
    if(maxCount > 1) {
        return mode;
    } else {
        return -1;
    }
}

int main() {
    int arr[] = {1, 2, 3, 2, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << "Mode of the array is " << findMode(arr, n);
    return 0;
}
