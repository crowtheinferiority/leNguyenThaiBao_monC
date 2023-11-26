#include <iostream>
#include <cstdlib>
#include <ctime>

class Coin {
    std::string side;
public:
    Coin() { toss(); }
    void toss() { side = rand() % 2 == 0 ? "heads" : "tails"; }
    std::string getSide() { return side; }
};

int main() {
    srand(time(0));
    Coin quarter, dime, nickel;
    double balance = 0.0;

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        if (quarter.getSide() == "heads") balance += 0.25;
        if (dime.getSide() == "heads") balance += 0.10;
        if (nickel.getSide() == "heads") balance += 0.05;

        std::cout << "Balance: $" << balance << std::endl;
    }

    if (balance == 1.0)
        std::cout << "Congratulations, you win!" << std::endl;
    else
        std::cout << "Your balance exceeded $1. You lose." << std::endl;

    return 0;
}
