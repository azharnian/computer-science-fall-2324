#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> myVector;

    for (int i = 0; i < 3; ++i) {
        vector<int> tempVector;

        for (int j = 0; j < 4; ++j) {
            tempVector.push_back(i * 4 + j + 1);
        }

        myVector.push_back(tempVector);
    }

    cout << "2D Vector Contents:" << endl;
    for (const auto &row : myVector) {
        for (int value : row) {
            cout << value << "\t";
        }
        cout << endl;
    }

    return 0;
}
