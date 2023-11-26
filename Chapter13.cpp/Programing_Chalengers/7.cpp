#include <iostream>

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    TestScores(double s1, double s2, double s3)
        : score1(s1), score2(s2), score3(s3) {}

    void setScore1(double s) { score1 = s; }
    void setScore2(double s) { score2 = s; }
    void setScore3(double s) { score3 = s; }

    double getScore1() const { return score1; }
    double getScore2() const { return score2; }
    double getScore3() const { return score3; }

    double getAverageScore() const { return (score1 + score2 + score3) / 3.0; }
};

int main() {
    double score1, score2, score3;
    std::cout << "Enter the first test score: ";
    std::cin >> score1;
    std::cout << "Enter the second test score: ";
    std::cin >> score2;
    std::cout << "Enter the third test score: ";
    std::cin >> score3;

    TestScores scores(score1, score2, score3);

    std::cout << "The average test score is: " << scores.getAverageScore() << "\n";

    return 0;
}
