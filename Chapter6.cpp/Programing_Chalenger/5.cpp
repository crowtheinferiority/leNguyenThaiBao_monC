#include <iostream>
#include <cmath>

// Function to calculate falling distance
double fallingDistance(int time) {
    const double g = 9.8;
    return 0.5 * g * std::pow(time, 2);
}

int main() {
    for (int time = 1; time <= 10; ++time) {
        double distance = fallingDistance(time);
        std::cout << "The object has fallen a distance of " << distance << " meters in " << time << " seconds." << std::endl;
    }

    return 0;
}
