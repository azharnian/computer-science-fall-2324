#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 42, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    if (binary_search(arr, arr + size, target))
        cout << "Element found in the array.\n";
    else
        cout << "Element not found in the array.\n";

    vector<int> vec = {2, 5, 8, 12, 16, 23, 38, 42, 56};
    target = 100;

    if (binary_search(vec.begin(), vec.end(), target))
        cout << "Element found in the vector.\n";
    else
        cout << "Element not found in the vector.\n";

    return 0;
}
