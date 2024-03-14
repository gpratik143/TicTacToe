#include <iostream>
#include <cstring>

void insertionSort(char arr[], int size, int& shiftCount) {
    for (int i = 1; i < size; ++i) {
        char key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
            ++shiftCount;
        }
        arr[j + 1] = key;
    }
}

int main() {
    char input[] = "insertionsort";
    int size = strlen(input);
    int shiftCount = 0;

    std::cout << "Original Array: " << input << std::endl;

    insertionSort(input, size, shiftCount);

    std::cout << "Sorted Array: " << input << std::endl;
    std::cout << "Number of shifts: " << shiftCount << std::endl;

    return 0;
}

