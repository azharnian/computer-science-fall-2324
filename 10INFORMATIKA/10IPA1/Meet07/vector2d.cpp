#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int> > matriks = {
                                        {5, 2, 8},
                                        {9, 1, 0},
                                        {0, 0, 3}
                                    };

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << matriks[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}