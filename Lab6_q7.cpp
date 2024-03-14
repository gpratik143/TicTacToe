#include <iostream>

void insertInSortedArray(int arr[], int& size, int element) {
    int i = size - 1;

    // Find the position to insert the element
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        --i;
    }

    // Insert the element at the correct position
    arr[i + 1] = element;
    ++size;
}

int main() {
    int arr[] = {2, 4, 5, 6, 8, 9, 10, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element = 7;

    std::cout << "Original Sorted Array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Insert the element in the sorted array
    insertInSortedArray(arr, size, element);

    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

