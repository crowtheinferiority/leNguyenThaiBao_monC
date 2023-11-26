#include <iostream>
using namespace std;

// Function prototype
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    // Call the showValues function and pass the array and its size
    showValues(numbers, ARRAY_SIZE);

    return 0;
}

// Function definition for showValues
void showValues(int nums[], int size)
{
    // Display the contents of the array
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
