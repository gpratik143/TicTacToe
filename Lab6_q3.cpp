#include <iostream>
#include <ctime>
#include <cstdlib>

int* Rdm(int n) {
    int* randomNumbers = new int[n]; // Allocate memory for n random numbers
    srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    for (int i = 0; i < n; ++i) {
        randomNumbers[i] = rand() % 100; // Generate random number between 0 to 99
    }

    return randomNumbers;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        std::swap(arr[i], arr[minIndex]);

        // Print the array after this pass
        std::cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
    }
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
    std::cout << std::endl;

    // Perform Selection Sort and show output of each pass
    selectionSort(randomArray, n);

    std::cout << "Sorted Numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cout << randomArray[i] << " ";
    }

    // Don't forget to free the dynamically allocated memory
    delete[] randomArray;

    return 0;
}

