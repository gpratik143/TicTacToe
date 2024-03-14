#include <iostream>
#include <vector>

void stableSelectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; ++i) {
        // Find the minimum element in the unsorted part of the array
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            // If the current element is equal to the minimum element, update minIndex
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Move the minimum element to its correct position
        int minVal = arr[minIndex];
        while (minIndex > i) {
            arr[minIndex] = arr[minIndex - 1];
            --minIndex;
        }
        arr[i] = minVal;
    }
}

int main() {
    std::vector<int> arr = {4, 2, 8, 2, 1, 5, 7};

    std::cout << "Original Array: ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    stableSelectionSort(arr);

    std::cout << "Sorted Array (Stable Selection Sort): ";
    for (const auto& num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

