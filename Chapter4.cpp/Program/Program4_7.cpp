#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int HIGHT_SCORE = 95;
    int score1, score2, score3;
    double average ;
    //get the three test scores.
    cout <<"Enter the three test scores and the average them: ";
    cin >> score1 >> score2 >> score3;

    //Calculate and display the average score.
    average = (score1 + score2 + score3) / 3;
    cout << fixed << showpoint << setprecision(1) ;
    cout << " Your average is"<< average << endl;
    // ERROR! This if statement is missing its braces!
    if (average >= HIGHT_SCORE)
    
        cout << "Congratulations!\n";
        cout << "That's a high score.\n";
        cout << "You deserve a pat on the back!\n";
        return 0;
}
