#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // Array size
    double testScores[SIZE]; // Array of test scores
    double total; // Total of the scores
    double lowestScore; // Lowest test score
    double average; // Average test score

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    // Get the total of the test scores.
    total = getTotal(testScores, SIZE);

    // Get the lowest test score.
    lowestScore = getLowest(testScores, SIZE);

    // Subtract the lowest score from the total.
    total -= lowestScore;

    // Calculate the average. Divide by (SIZE - 1) because the lowest test score was dropped.
    average = total / (SIZE - 1);

    // Display the average.
    cout << "The average with the lowest score dropped is " << average << ".\n";

    return 0;
}

// Function definition for getTestScores
void getTestScores(double scores[], int size)
{
    cout << "Enter " << size << " test scores:\n";
    for (int index = 0; index < size; index++)
    {
        cout << "Test score #" << (index + 1) << ": ";
        cin >> scores[index];
    }
}

// Function definition for getTotal
double getTotal(const double scores[], int size)
{
    double total = 0;
    for (int index = 0; index < size; index++)
    {
        total += scores[index];
    }
    return total;
}

// Function definition for getLowest
double getLowest(const double scores[], int size)
{
    double lowest = scores[0];
    for (int index = 1; index < size; index++)
    {
        if (scores[index] < lowest)
        {
            lowest = scores[index];
        }
    }
    return lowest;
}
