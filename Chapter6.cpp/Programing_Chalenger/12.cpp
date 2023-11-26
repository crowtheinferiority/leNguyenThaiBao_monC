#include <iostream>
#include <vector>
#include <algorithm>

// Function to get a judge's score
void getJudgeData(double &score) {
    do {
        std::cout << "Enter a judge's score: ";
        std::cin >> score;
        if (score < 0 || score > 10) {
            std::cout << "Invalid score. Please enter a score between 0 and 10." << std::endl;
        }
    } while (score < 0 || score > 10);
}

// Function to find the lowest score
double findLowest(const std::vector<double> &scores) {
    return *std::min_element(scores.begin(), scores.end());
}

// Function to find the highest score
double findHighest(const std::vector<double> &scores) {
    return *std::max_element(scores.begin(), scores.end());
}

// Function to calculate and display the average of the three middle scores
void calcScore(std::vector<double> &scores) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double sum = 0;
    for (double score : scores) {
        sum += score;
    }
    double average = (sum - lowest - highest) / (scores.size() - 2);
    std::cout << "The average of the three middle scores is: " << average << std::endl;
}

int main() {
    std::vector<double> scores(5);
    for (double &score : scores) {
        getJudgeData(score);
    }
    calcScore(scores);

    return 0;
}
