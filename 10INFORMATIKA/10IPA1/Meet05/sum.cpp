#include <iostream>
using namespace std;

int main(){
    // baris 4 
    // 80 40 20 10 5
    int total = 0;
    for (int i = 80; i >= 5; i /= 2){
        total += i;
    }
    cout << total << endl;

    return 0;
}