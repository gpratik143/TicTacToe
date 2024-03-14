#include <iostream>
#include <ctime>
#include <cstdlib>

int* Rdm(int n) {
    int* randomNumbers = new int[n]; // Allocate memory for n random numbers
    //srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    for (int i = 0; i < n; ++i) {
        randomNumbers[i] = rand() % 100; // Generate random number between 0 to 99
    }

    return randomNumbers;N
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int* randomArray = Rdm(n); // Call the Rdm function to get random numbers

    std::cout << "Random Numbers: ";
    for (int i = 0; i < n; ++i) {
       std::cout << randomArray[i] << " ";
    }

    // Don't forget to free the dynamically allocated memory
    delete[] randomArray;

    return 0;
}
