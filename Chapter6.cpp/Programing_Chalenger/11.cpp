#include <iostream>
#include <algorithm>
#include <vector>

// Function to get a score
void getScore(int &score) {
    do {
        std::cout << "Enter a test score: ";
        std::cin >> score;
        if (score < 0 || score > 100) {
            std::cout << "Invalid score. Please enter a score between 0 and 100." << std::endl;
        }
    } while (score < 0 || score > 100);
}

// Function to find the lowest score
int findLowest(const std::vector<int> &scores) {
    return *std::min_element(scores.begin(), scores.end());
}

// Function to calculate and display the average of the four highest scores
void calcAverage(const std::vector<int> &scores) {
    int lowest = findLowest(scores);
    int sum = 0;
    for (int score : scores) {
        if (score != lowest) {
            sum += score;
        }
    }
    double average = static_cast<double>(sum) / (scores.size() - 1);
    std::cout << "The average of the four highest scores is: " << average << std::endl;
}

int main() {
    std::vector<int> scores(5);
    for (int &score : scores) {
        getScore(score);
    }
    calcAverage(scores);

    return 0;
}
