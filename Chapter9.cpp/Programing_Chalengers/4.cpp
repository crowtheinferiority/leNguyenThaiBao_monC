#include <iostream>
#include <algorithm> // for std::sort
#include <vector>
#include <string>

// Struct to hold student data
struct Student {
    std::string name;
    double score;
};

// Function to allocate array
Student* allocateArray(int size) {
    Student* arr = new Student[size];
    return arr;
}

// Function to calculate average
double calculateAverage(Student* arr, int size) {
    double sum = 0;
    for (int i = 1; i < size; i++) { // start from 1 to skip the lowest score
        sum += (arr + i)->score;
    }
    return sum / (size - 1); // subtract 1 from size to exclude the lowest score
}

// Comparison function for sorting
bool compareStudents(Student a, Student b) {
    return a.score < b.score;
}

int main() {
    int size;
    std::cout << "Enter the number of students: ";
    std::cin >> size;

    Student* students = allocateArray(size);

    std::cout << "Enter the student names and scores:\n";
    for (int i = 0; i < size; i++) {
        std::cout << "Student " << (i+1) << ":\n";
        std::cout << "Name: ";
        std::cin >> (students + i)->name;
        std::cout << "Score: ";
        std::cin >> (students + i)->score;
        while ((students + i)->score < 0) {
            std::cout << "Invalid input. Score must be non-negative. Try again: ";
            std::cin >> (students + i)->score;
        }
    }

    // Sort the students
    std::sort(students, students + size, compareStudents);

    // Calculate average
    double average = calculateAverage(students, size);

    // Display the sorted scores and average
    std::cout << "\nSorted Scores (lowest score dropped): \n";
    for (int i = 1; i < size; i++) { // start from 1 to skip the lowest score
        std::cout << (students + i)->name << ": " << (students + i)->score << "\n";
    }
    std::cout << "\nAverage Score: " << average << "\n";

    // Don't forget to delete the array when you're done
    delete[] students;

    return 0;
}
