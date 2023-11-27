#include <iostream>
using namespace std;

int main() {
    int myArray[3][4];

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            myArray[i][j] = i * 4 + j + 1;
        }
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << myArray[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
