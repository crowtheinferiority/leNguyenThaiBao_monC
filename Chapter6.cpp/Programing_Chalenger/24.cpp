#include <iostream>
#include <cstdlib>
#include <ctime>

// Function to get the computer's choice
int getComputerChoice() {
    srand(time(0));
    return rand() % 3 + 1;
}

// Function to get the user's choice
int getUserChoice() {
    int choice;
    std::cout << "Enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
    std::cin >> choice;
    return choice;
}

// Function to determine the winner
void determineWinner(int computerChoice, int userChoice) {
    if (computerChoice == userChoice) {
        std::cout << "It's a tie. Play again.\n";
    } else if ((computerChoice == 1 && userChoice == 3) || 
               (computerChoice == 2 && userChoice == 1) || 
               (computerChoice == 3 && userChoice == 2)) {
        std::cout << "Computer wins.\n";
    } else {
        std::cout << "User wins.\n";
    }
}

int main() {
    int computerChoice = getComputerChoice();
    int userChoice = getUserChoice();

    std::cout << "Computer chose: " << computerChoice << "\n";

    determineWinner(computerChoice, userChoice);

    return 0;
}
