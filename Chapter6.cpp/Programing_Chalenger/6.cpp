#include <iostream>

// Function to calculate kinetic energy
double kineticEnergy(double mass, double velocity) {
    return 0.5 * mass * velocity * velocity;
}

int main() {
    double mass, velocity;

    // Get the mass of the object
    std::cout << "Enter the object's mass in kilograms: ";
    std::cin >> mass;

    // Get the velocity of the object
    std::cout << "Enter the object's velocity in meters per second: ";
    std::cin >> velocity;

    // Calculate and display the kinetic energy
    double energy = kineticEnergy(mass, velocity);
    std::cout << "The object's kinetic energy is: " << energy << " joules." << std::endl;

    return 0;
}
