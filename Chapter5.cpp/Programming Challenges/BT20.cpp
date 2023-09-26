#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Random Number Guessing Game!" << endl;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> userGuess;
        attempts++;

        if (userGuess < randomNumber) {
            cout << "Too low, try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high, try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " correctly in " << attempts << " attempts!" << endl;
        }
    } while (userGuess != randomNumber);

    return 0;
}
