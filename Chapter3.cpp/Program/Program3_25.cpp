// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// using namespace std;

// int main()
// {
//     // Get the system time.
//     unsigned seed = time(0);

//     // Seed the random number generator.
//     srand(seed);

//     // Display three random numbers.
//     cout << rand() << endl;
//     cout << rand() << endl;
//     cout << rand() << endl;

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Generate a random number in the range of 1 through 100.
    const int MIN_VALUE = 1;
    const int MAX_VALUE = 100;
    int y = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    // Display the random number.
    cout << "Random number in the range 1 through 100: " << y << endl;

    return 0;
}
