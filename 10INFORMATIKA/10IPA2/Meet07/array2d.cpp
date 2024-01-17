#include <iostream>
using namespace std;

int main(){
    int numbers[5] = {1, 2, 3, 4, 5};

    int matrix[3][3] = {
                    //   0 1 2
                        {5,2,8}, // 0
                        {9,1,0}, // 1
                        {0,0,3}  // 2
                        };
    // cout << matrix[2][2] << endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}