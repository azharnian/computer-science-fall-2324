#include <iostream>
using namespace std;

int main(){
    int total = 0;
    for (int i = 4; i < 100; i += 10){
        // cout << i << " ";
        total += i;
    }
    cout << total << endl;

    total = 0;
    for (int i = 101; i > 0; i -= 5){
        total += i;
    }
    cout << total << endl;
    
    return 0;
}