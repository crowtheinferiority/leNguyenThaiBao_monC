#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int score1, score2, score3; //To hold three test scores
    double average;             //To hold the average score

    // get the three test scores
    cout << "Enter 3 test scores and i will average them: ";
    cin >> score1 >> score2 >> score3;
    // calculate and display the average score.
    average = (score1 + score2 + score3) / 3;
    cout << fixed << showpoint <<setprecision (1);
    cout  << "your average is" << average << endl;
    // Our intention is to congratulate the user
    // for having a perfect score. But, this doesn't work.
    if (average=100) //WRONG! this is a assignment'
    cout << "Congratulations! That is a perfect score!\n ";
    return 0;

}