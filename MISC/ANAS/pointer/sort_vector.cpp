#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numbers = {5, 2, 8, 1, 3};

    // ascending
    std::sort(numbers.begin(), numbers.end());

    std::cout << "Sorted Numbers: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    // descending
    std::sort(numbers.begin(), numbers.end(), std::greater<int>());

    std::cout << "Sorted Numbers (Descending): ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
