#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int HIGHT_SCORE = 95;
    int score1, score2, score3;
    double average;
    // get the three test scores.
    cout << "Enter 3 test score and i will average them." ;
    cin >> score1 >> score2 >> score3;

    //Calculate and display the average score.
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average << endl;
    // If the average is high, congratulate the user.
    if (average > HIGHT_SCORE )
    {
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
    }
return 0;
}
