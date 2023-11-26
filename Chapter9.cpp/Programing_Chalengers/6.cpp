#include <iostream>

// Function prototypes
void arrSelectSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()
{
    int numDonations;
    std::cout << "Enter the number of donations: ";
    std::cin >> numDonations;

    int *donations = new int[numDonations];  // Dynamically allocate donations array

    // Ask user to input donation values
    for (int i = 0; i < numDonations; i++) {
        std::cout << "Enter donation " << (i+1) << ": ";
        std::cin >> donations[i];
    }

    // An array of pointers to int.
    int **arrPtr = new int*[numDonations];

    // Each element of arrPtr is a pointer to int. Make each
    // element point to an element in the donations array.
    for (int count = 0; count < numDonations; count++)
        arrPtr[count] = &donations[count];

    // Sort the elements of the array of pointers.
    arrSelectSort(arrPtr, numDonations);

    // Display the donations using the array of pointers. This
    // will display them in sorted order.
    std::cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, numDonations);

    // Display the donations in their original order.
    std::cout << "The donations, in their original order are: \n";
    showArray(donations, numDonations);

    delete [] donations;  // Deallocate donations array
    delete [] arrPtr;     // Deallocate arrPtr array

    return 0;
}

void arrSelectSort(int *arr[], int size)
{
   int startScan, minIndex;
   int *minElem;

   for (startScan = 0; startScan < (size - 1); startScan++)
   {
      minIndex = startScan;
      minElem = arr[startScan];
      for(int index = startScan + 1; index < size; index++)
      {
         if (*(arr[index]) < *minElem)
         {
            minElem = arr[index];
            minIndex = index;
         }
      }
      arr[minIndex] = arr[startScan];
      arr[startScan] = minElem;
   }
}

void showArray(const int arr[], int size)
{
   for (int count = 0; count < size; count++)
      std::cout << arr[count] << " ";
   std::cout << std::endl;
}

void showArrPtr(int *arr[], int size)
{
   for (int count = 0; count < size; count++)
      std::cout << *(arr[count]) << " ";
   std::cout << std::endl;
}
