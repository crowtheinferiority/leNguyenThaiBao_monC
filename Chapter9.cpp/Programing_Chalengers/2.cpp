#include <iostream>
#include <algorithm> // for std::sort

// Function to allocate array
double* allocateArray(int size) {
    double* arr = new double[size];
    return arr;
}

// Function to calculate average
double calculateAverage(double* arr, int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

int main() {
    int size;
    std::cout << "Enter the number of test scores: ";
    std::cin >> size;

    double* scores = allocateArray(size);

    std::cout << "Enter the test scores:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Score " << (i+1) << ": ";
        std::cin >> scores[i];
        while (scores[i] < 0) {
            std::cout << "Invalid input. Score must be non-negative. Try again: ";
            std::cin >> scores[i];
        }
    }

    // Sort the scores
    std::sort(scores, scores + size);

    // Calculate average
    double average = calculateAverage(scores, size);

    // Display the sorted scores and average
    std::cout << "\nSorted Scores: ";
    for (int i = 0; i < size; i++) {
        std::cout << scores[i] << " ";
    }
    std::cout << "\nAverage Score: " << average << "\n";

    // Don't forget to delete the array when you're done
    delete[] scores;

    return 0;
}
