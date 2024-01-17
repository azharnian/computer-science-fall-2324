#include <iostream>
using namespace std;

int main(){
    int numbers[] = {10, 20, 30, 40};

    int matrix[3][3] = {
        {5, 2, 8},
        {9, 1, 0},
        {0, 0, 3}
    }; 

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }  
    return 0;
}