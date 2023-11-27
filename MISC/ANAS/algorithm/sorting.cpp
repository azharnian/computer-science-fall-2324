#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int myArray[] = {4, 2, 7, 1, 5};
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
    sort(myArray, myArray + arraySize);

    cout << "Sorted Array:" << endl;
    for (int i = 0; i < arraySize; ++i) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    vector<int> myVector = {4, 2, 7, 1, 5};
    sort(myVector.begin(), myVector.end());

    cout << "Sorted Vector:" << endl;
    for (int value : myVector) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
