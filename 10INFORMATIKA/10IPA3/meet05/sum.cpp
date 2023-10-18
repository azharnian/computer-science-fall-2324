#include <iostream>
using namespace std;

int main(){
    // 1
    int total = 0;
    for (int i = 4; i < 100; i += 10){
        total += i;
    }
    cout << total << endl;

    total = 0;
    return 0;
}