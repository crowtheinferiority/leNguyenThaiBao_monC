#include <iostream>
#include <string>

struct Student {
    std::string name;
    int idnum;
    double* tests;
    double average;
    char grade;
};

char calculateGrade(double average) {
    if (average >= 91) return 'A';
    else if (average >= 81) return 'B';
    else if (average >= 71) return 'C';
    else if (average >= 61) return 'D';
    else return 'F';
}

int main() {
    int numStudents, numTests;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;
    std::cout << "Enter the number of tests: ";
    std::cin >> numTests;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "\nEnter data for student " << (i + 1) << ":" << std::endl;
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, students[i].name);
        std::cout << "ID number: ";
        std::cin >> students[i].idnum;

        students[i].tests = new double[numTests];
        students[i].average = 0;
        for (int j = 0; j < numTests; ++j) {
            do {
                std::cout << "Test " << (j + 1) << ": ";
                std::cin >> students[i].tests[j];
            } while (students[i].tests[j] < 0);
            students[i].average += students[i].tests[j];
        }
        students[i].average /= numTests;
        students[i].grade = calculateGrade(students[i].average);
    }

    std::cout << "\nStudent Data:" << std::endl;
    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Name: " << students[i].name << std::endl;
        std::cout << "ID Number: " << students[i].idnum << std::endl;
        std::cout << "Average Test Score: " << students[i].average << std::endl;
        std::cout << "Course Grade: " << students[i].grade << std::endl;
        std::cout << std::endl;
    }

    for (int i = 0; i < numStudents; ++i) {
        delete[] students[i].tests;
    }
    delete[] students;

    return 0;
}
