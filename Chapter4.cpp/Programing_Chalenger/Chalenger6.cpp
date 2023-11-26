#include <iostream>
using namespace std;

int main() {
    double mass, weight;

    cout << "Enter the object's mass in kilograms: ";
    cin >> mass;

    weight = mass * 9.8;

    cout << "The object's weight is " << weight << " newtons.";

    if (weight > 1000) {
        cout << " The object is too heavy.";
    } else if (weight < 10) {
        cout << " The object is too light.";
    }

    return 0;
}
