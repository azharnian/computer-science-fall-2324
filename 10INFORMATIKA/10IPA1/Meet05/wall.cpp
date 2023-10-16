#include <iostream>
using namespace std;

int main(){
    int dim_x, dim_y;
    cout << "input your dimension : ";
    cin >> dim_x >> dim_y;
    for (int i = 0; i < dim_y; i++){
        for (int j = 0; j < dim_x; j++){
            cout << "#" ;
        } 
        cout << endl;
    }
    return 0;
}