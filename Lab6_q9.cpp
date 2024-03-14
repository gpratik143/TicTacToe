#include <iostream>
#include <vector>

void onlineInsertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); ++i) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key, to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> numbers;
    int num;

    std::cout << "Enter numbers to sort (enter a non-integer to stop):" << std::endl;
    while (std::cin >> num) {
        numbers.push_back(num);
    }

    // Sort the numbers using online insertion sort
    onlineInsertionSort(numbers);

    std::cout << "Sorted Numbers: ";
    for (const auto& number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}

