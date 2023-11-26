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
    Die fishingDie(6);
    int points = 0;
    char playAgain;

    do {
        fishingDie.roll();
        switch (fishingDie.getValue()) {
            case 1: points += 50; break; // huge fish
            case 2: points += 10; break; // old shoe
            case 3: points += 25; break; // little fish
            // add more cases as needed
            default: points += 0; break; // nothing caught
        }

        std::cout << "Do you want to continue fishing? (Y/N): ";
        std::cin >> playAgain;
    } while (playAgain == 'Y' || playAgain == 'y');

    std::cout << "Total fishing points: " << points << std::endl;
    if (points >= 100)
        std::cout << "Congratulations, you had a great fishing day!" << std::endl;
    else
        std::cout << "Better luck next time!" << std::endl;

    return 0;
}
