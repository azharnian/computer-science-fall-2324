#include <iostream>
#include <algorithm>

int main() {
    int numbers[] = {5, 2, 8, 1, 3};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    std::sort(numbers, numbers + size);
    std::cout << "Sorted Numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    printf("\n");

    std::sort(numbers, numbers + size, std::greater<int>());
    std::cout << "Sorted Numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cout << numbers[i] << " ";
    }
    printf("\n");

    return 0;
}
