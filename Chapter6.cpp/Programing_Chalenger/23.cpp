#include <iostream>
#include <fstream>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::ofstream file;

    // Open the file
    file.open("prime_numbers.txt");

    // Check each number from 1 through 100
    for (int num = 1; num <= 100; num++) {
        // If the number is prime, write it to the file
        if (isPrime(num)) {
            file << num << "\n";
        }
    }

    // Close the file
    file.close();

    std::cout << "The list of prime numbers from 1 through 100 has been stored in 'prime_numbers.txt'.\n";

    return 0;
}
