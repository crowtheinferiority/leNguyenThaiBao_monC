#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int num1 = rand() % 1000;
    int num2 = rand() % 1000;
    int studentAnswer, correctAnswer;

    cout << "  " << num1 << endl;
    cout << "+ " << num2 << endl;
    cout << "-----" << endl;
    cin >> studentAnswer;

    correctAnswer = num1 + num2;

    if (studentAnswer == correctAnswer) {
        cout << "Congratulations! That's the correct answer.";
    } else {
        cout << "Sorry, that's incorrect. The correct answer is " << correctAnswer << ".";
    }

    return 0;
}

