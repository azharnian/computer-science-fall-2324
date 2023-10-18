#include <iostream>
using namespace std;

int main(){
    int dim;
    cin >> dim;

    for (int i = 0; i < dim; i++){
        for (int j = 0; j <= i; j++){
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}