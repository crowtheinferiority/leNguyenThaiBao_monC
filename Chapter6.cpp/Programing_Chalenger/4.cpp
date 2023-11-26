#include <iostream>
#include <string>

// Function to get the number of accidents in a region
int getNumAccidents(std::string region) {
    int numAccidents;
    std::cout << "Enter the number of automobile accidents reported in " << region << " during the last year: ";
    std::cin >> numAccidents;

    // Validate the number of accidents
    while (numAccidents < 0) {
        std::cout << "The number of accidents cannot be negative. Please enter again: ";
        std::cin >> numAccidents;
    }

    return numAccidents;
}

// Function to find and print the region with the lowest number of accidents
void findLowest(int north, int south, int east, int west, int central) {
    int lowestNumAccidents = north;
    std::string lowestRegion = "North";

    if (south < lowestNumAccidents) {
        lowestNumAccidents = south;
        lowestRegion = "South";
    }

    if (east < lowestNumAccidents) {
        lowestNumAccidents = east;
        lowestRegion = "East";
    }

    if (west < lowestNumAccidents) {
        lowestNumAccidents = west;
        lowestRegion = "West";
    }

    if (central < lowestNumAccidents) {
        lowestNumAccidents = central;
        lowestRegion = "Central";
    }

    std::cout << "The region with the fewest reported automobile accidents is " << lowestRegion << " with " << lowestNumAccidents << " accidents." << std::endl;
}

int main() {
    int north = getNumAccidents("North");
    int south = getNumAccidents("South");
    int east = getNumAccidents("East");
    int west = getNumAccidents("West");
    int central = getNumAccidents("Central");

    findLowest(north, south, east, west, central);

    return 0;
}
