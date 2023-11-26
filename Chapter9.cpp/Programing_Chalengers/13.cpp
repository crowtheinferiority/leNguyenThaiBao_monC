#include <iostream>
#include <map>

double findAverage(int* arr, int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum / n;
}

double findMedian(int* arr, int n) {
    if(n % 2 == 0) {
        return (*(arr + n/2 - 1) + *(arr + n/2)) / 2.0;
    } else {
        return *(arr + n/2);
    }
}

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
    int numStudents;
    std::cout << "How many students were surveyed? ";
    std::cin >> numStudents;

    int* moviesWatched = new int[numStudents];
    for(int i = 0; i < numStudents; i++) {
        std::cout << "Enter the number of movies student " << (i+1) << " watched: ";
        std::cin >> *(moviesWatched + i);
        while(*(moviesWatched + i) < 0) {
            std::cout << "Invalid input. Enter a non-negative number: ";
            std::cin >> *(moviesWatched + i);
        }
    }

    double average = findAverage(moviesWatched, numStudents);
    double median = findMedian(moviesWatched, numStudents);
    int mode = findMode(moviesWatched, numStudents);

    std::cout << "Average: " << average << std::endl;
    std::cout << "Median: " << median << std::endl;
    if(mode != -1) {
        std::cout << "Mode: " << mode << std::endl;
    } else {
        std::cout << "No mode" << std::endl;
    }

    delete[] moviesWatched;

    return 0;
}
