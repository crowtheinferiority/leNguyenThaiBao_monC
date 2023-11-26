#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
private:
    std::string sideUp;

public:
    Coin() {
        srand(time(0));
        toss();
    }

    void toss() {
        if (rand() % 2 == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    std::string getSideUp() const {
        return sideUp;
    }
};

int main() {
    Coin coin;
    std::cout << "Initial side up: " << coin.getSideUp() << "\n";

    int headsCount = 0, tailsCount = 0;
    for (int i = 0; i < 20; i++) {
        coin.toss();
        std::cout << "Toss " << (i + 1) << ": " << coin.getSideUp() << "\n";
        if (coin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    std::cout << "Heads count: " << headsCount << "\n";
    std::cout << "Tails count: " << tailsCount << "\n";

    return 0;
}
