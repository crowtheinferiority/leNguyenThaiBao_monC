#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Define an array of strings representing planets.
    string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                         "Jupiter", "Saturn", "Uranus",
                         "Neptune", "Pluto (a dwarf planet)" };

    cout << "Here are the planets:\n";

    // Display the values in the array.
    for (string val : planets)
    {
        cout << val << endl;
    }

    return 0;
}
