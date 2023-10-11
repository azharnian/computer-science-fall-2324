#include <iostream>
using namespace std;

int main(){
    // 4, 14, 24, 34, ... (<100)
    // while
    int i = 4;
    while (i < 100){
        cout << i << " ";
        i += 10;
    }
    cout << endl;
    // for
    for (int i = 4; i < 100; i += 10){
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}