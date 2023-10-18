#include <iostream>
using namespace std;

int main(){
    // 4, 14, 24, 34
    int counter = 4;
    while (counter < 100){
        cout << counter << " ";
        counter += 10;
    }
    cout << endl;

    for (int counter = 4; counter < 100; counter += 10){
        cout << counter << " ";
    }
    cout << endl;
    return 0;
}