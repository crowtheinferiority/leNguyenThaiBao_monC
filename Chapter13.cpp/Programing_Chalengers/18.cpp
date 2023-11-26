#include <iostream>
#include <cstdlib>
#include <ctime>

class Die {
    int sides;
    int value;
public:
    Die(int = 6);
    void roll();
    int getSides();
    int getValue();
};

Die::Die(int numSides) {
    unsigned seed = time(0);
    srand(seed);
    sides = numSides;
    roll();
}

void Die::roll() {
    const int MIN_VALUE = 1;
    value = (rand() % (sides - MIN_VALUE + 1)) + MIN_VALUE;
}

int Die::getSides() {
    return sides;
}

int Die::getValue() {
    return value;
}

int main() {
    Die die1, die2;
    int playerTotal = 0, computerTotal = 0;
    char rollAgain;

    do {
        die1.roll();
        die2.roll();
        computerTotal += die1.getValue() + die2.getValue();

        std::cout << "Your current total is " << playerTotal << std::endl;
        std::cout << "Do you want to roll the dice? (Y/N): ";
        std::cin >> rollAgain;

        if (rollAgain == 'Y' || rollAgain == 'y') {
            die1.roll();
            die2.roll();
            playerTotal += die1.getValue() + die2.getValue();
        }
    } while (playerTotal <= 21 && (rollAgain == 'Y' || rollAgain == 'y'));

    std::cout << "Your total: " << playerTotal << std::endl;
    std::cout << "Computer's total: " << computerTotal << std::endl;

    if (playerTotal > 21)
        std::cout << "You went over 21! You lose." << std::endl;
    else if (computerTotal > 21)
        std::cout << "Computer went over 21! You win." << std::endl;
    else if (playerTotal > computerTotal)
        std::cout << "You beat the computer! You win." << std::endl;
    else
        std::cout << "The computer beat you! You lose." << std::endl;

    return 0;
}
