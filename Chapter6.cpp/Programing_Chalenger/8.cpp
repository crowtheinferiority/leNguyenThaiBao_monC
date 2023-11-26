#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to simulate a coin toss
void coinToss() {
    // Generate a random number in the range of 1 through 2
    int randomNumber = rand() % 2 + 1;

    // Display the result
    if (randomNumber == 1) {
        std::cout << "Heads" << std::endl;
    } else {
        std::cout << "Tails" << std::endl;
    }
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    // Ask the user how many times the coin should be tossed
    int numTosses;
    std::cout << "How many times would you like to toss the coin? ";
    std::cin >> numTosses;

    // Simulate the tossing of the coin
    for (int i = 0; i < numTosses; ++i) {
        coinToss();
    }

    return 0;
}
