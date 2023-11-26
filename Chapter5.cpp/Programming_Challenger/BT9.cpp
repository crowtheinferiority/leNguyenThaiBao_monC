#include <iostream>
using namespace std;

int main() {
    int numFloors;
    int totalRooms = 0;
    int totalOccupied = 0;

    cout << "Enter the number of floors in the hotel: ";
    cin >> numFloors;

    for (int floor = 1; floor <= numFloors; floor++) {
        int roomsOnFloor, occupiedRooms;

        cout << "Enter the number of rooms on floor " << floor << ": ";
        cin >> roomsOnFloor;

        totalRooms += roomsOnFloor;

        cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        cin >> occupiedRooms;

        totalOccupied += occupiedRooms;
    }

    int unoccupiedRooms = totalRooms - totalOccupied;
    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

    cout << "Total number of rooms in the hotel: " << totalRooms << endl;
    cout << "Total number of occupied rooms: " << totalOccupied << endl;
    cout << "Total number of unoccupied rooms: " << unoccupiedRooms << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}
