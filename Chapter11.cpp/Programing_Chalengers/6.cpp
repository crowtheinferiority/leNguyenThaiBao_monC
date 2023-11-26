#include <iostream>
#include <string>

struct SoccerPlayer {
    std::string name;
    int number;
    int points;
};

int main() {
    SoccerPlayer players[12];
    int totalPoints = 0;
    int maxPoints = 0;
    std::string maxPointsPlayer;
    int maxPointsNumber;

    for (int i = 0; i < 12; ++i) {
        std::cout << "Enter data for player " << (i + 1) << ":" << std::endl;
        std::cout << "Name: ";
        std::cin >> players[i].name;
        do {
            std::cout << "Number: ";
            std::cin >> players[i].number;
        } while (players[i].number < 0);
        do {
            std::cout << "Points: ";
            std::cin >> players[i].points;
        } while (players[i].points < 0);

        totalPoints += players[i].points;
        if (players[i].points > maxPoints) {
            maxPoints = players[i].points;
            maxPointsPlayer = players[i].name;
            maxPointsNumber = players[i].number;
        }
    }

    std::cout << "\nNumber\tName\tPoints" << std::endl;
    for (int i = 0; i < 12; ++i) {
        std::cout << players[i].number << "\t" << players[i].name << "\t" << players[i].points << std::endl;
    }

    std::cout << "\nTotal Points: " << totalPoints << std::endl;
    std::cout << "Player with Most Points: " << maxPointsPlayer << " (Number: " << maxPointsNumber << ", Points: " << maxPoints << ")" << std::endl;

    return 0;
}
