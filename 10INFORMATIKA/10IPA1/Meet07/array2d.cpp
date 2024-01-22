#include <iostream>
using namespace std;

int main(){
    int matriks[3][3] = {  //0  1  2
                            {5, 2, 8}, // 0
                            {9, 1, 0}, // 1
                            {0, 0, 3}};// 2

    cout << matriks[2][2] << endl; // 3

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}