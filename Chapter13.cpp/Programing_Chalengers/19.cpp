#include <iostream>
#include <string>

class Question {
    std::string question;
    std::string answers[4];
    int correctAnswer;

public:
    Question(std::string q, std::string a1, std::string a2, std::string a3, std::string a4, int correct) {
        question = q;
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
        correctAnswer = correct;
    }

    void showQuestion() {
        std::cout << question << std::endl;
        for (int i = 0; i < 4; i++) {
            std::cout << i + 1 << ". " << answers[i] << std::endl;
        }
    }

    bool checkAnswer(int answer) {
        return answer == correctAnswer;
    }
};

int main() {
    Question questions[10] = {
        Question("Question 1", "Answer 1", "Answer 2", "Answer 3", "Answer 4", 1),
        // Add more questions as needed
    };

    int playerScores[2] = {0, 0};

    for (int player = 0; player < 2; player++) {
        std::cout << "Player " << player + 1 << "'s turn." << std::endl;
        for (int i = 0; i < 5; i++) {
            questions[i].showQuestion();

            int answer;
            std::cin >> answer;

            if (questions[i].checkAnswer(answer)) {
                playerScores[player]++;
            }
        }
    }

    std::cout << "Player 1's score: " << playerScores[0] << std::endl;
    std::cout << "Player 2's score: " << playerScores[1] << std::endl;

    if (playerScores[0] > playerScores[1]) {
        std::cout << "Player 1 wins!" << std::endl;
    } else if (playerScores[1] > playerScores[0]) {
        std::cout << "Player 2 wins!" << std::endl;
    } else {
        std::cout << "It's a tie!" << std::endl;
    }

    return 0;
}
