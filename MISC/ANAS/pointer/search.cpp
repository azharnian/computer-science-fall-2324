#include <iostream>
#include <algorithm>

int main() {
    int numbers[] = {1, 2, 3, 5, 8, 13, 21};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target = 5;

    if (std::binary_search(numbers, numbers + size, target)) {

        auto it = std::lower_bound(numbers, numbers + size, target);
        int index = std::distance(std::begin(numbers), it);
        std::cout << "Element " << target << " found at index " << index << "." << std::endl;
   
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}
