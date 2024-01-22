#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int my_array[] = {4, 2, 7, 1, 5};
    int array_size = sizeof(my_array) / sizeof(my_array[0]);
    sort(my_array, my_array + array_size);
    // sort(&my_array[0], &my_array[5]);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < array_size; ++i) {
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
