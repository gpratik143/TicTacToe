#include <iostream>
#include <ctime>
#include <cstdlib>

int* Rdm(int n) {
    int* randomNumbers = new int[n]; // Allocate memory for n random numbers
    //srand(static_cast<unsigned int>(time(0))); // Seed for random number generation

    for (int i = 0; i < n; ++i) {
        randomNumbers[i] = rand() % 100; // Generate random number between 0 to 99
    }

    return randomNumbers;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false; // Flag to optimize the algorithm

        // Last i elements are already in place, so we don't need to check them
        for (int j = 0; j < n - i - 1; ++j) {
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // Print the array after this pass
        std::cout << "Pass " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;

        // If no two elements were swapped in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
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

    // Perform Bubble Sort and show output of each pass
    bubbleSort(randomArray, n);

    std::cout << "Sorted Numbers: ";
    for (int i = 0; i < n; ++i) {
        std::cout << randomArray[i] << " ";
    }

    // Don't forget to free the dynamically allocated memory
    delete[] randomArray;

    return 0;
}

