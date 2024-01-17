#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int my_array[] = {4, 2, 7, 1, 5};
    int arraySize = sizeof(my_array) / sizeof(my_array[0]);
    sort(my_array, my_array + arraySize);
    // sort(&my_array[0], &my_array[5]);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << my_array[i] << " ";
    }
    cout << endl;

    vector<int> my_vector = {4, 2, 7, 1, 5};
    sort(my_vector.begin(), my_vector.end());

    cout << "Sorted Vector:" << endl;
    for (int value : my_vector) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
