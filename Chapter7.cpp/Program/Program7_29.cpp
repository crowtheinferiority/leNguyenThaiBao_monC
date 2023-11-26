// This program demonstrates the vector pop_back member function.
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> values;

  // Store values in the vector.
  values.push_back(1);
  values.push_back(2);
  values.push_back(3);

  // Print the size of the vector.
  cout << "The size of values is " << values.size() << endl;

  // Remove a value from the vector.
  cout << "Popping a value from the vector..." << endl;
  values.pop_back();

  // Print the size of the vector again.
  cout << "The size of values is now " << values.size() << endl;

  // Remove another value from the vector.
  cout << "Popping a value from the vector..." << endl;
  values.pop_back();

  // Print the size of the vector again.
  cout << "The size of values is now " << values.size() << endl;

  // Remove the last value from the vector.
  cout << "Popping a value from the vector..." << endl;
  values.pop_back();

  // Print the size of the vector again.
  cout << "The size of values is now " << values.size() << endl;

  return 0;
}