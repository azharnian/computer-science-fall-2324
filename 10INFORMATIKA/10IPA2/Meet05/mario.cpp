#include <iostream>
using namespace std;

int main(){

    //horizontal
    for (int i = 0; i < 4; i++){
        cout << "#";
    }
    cout << endl;

    // vertical
    int i = 0;
    while (i < 4){
        cout << "#" << endl;
        i++;
    }

    // wall
 
    for (int i = 0; i < 4; i++){
         // row
        for (int j = 0; j < 4 ; j++){
            cout << "#";
        }
        cout << endl;
    }
    
    return 0;
}