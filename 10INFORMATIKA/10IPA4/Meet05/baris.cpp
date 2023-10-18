#include <iostream>
using namespace std;

int main(){
    // 1 -> 4, 14, 24, 34, (< 100)
    int i = 4;
    while (i < 100){
        cout << i << " ";
        i += 10;
    }
    cout << endl;

    for (int i = 4; i < 100; i += 10){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}