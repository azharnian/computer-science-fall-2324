#include <iostream>
using namespace std;

int main(){
    // int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;
    int scores[3] = {72, 73, 33};
    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;
    for (int i = 0; i < 3; i++){
        cout << scores[i] << endl;
    }

    for (int score : scores){
        cout << score << endl;
    }
    return 0;
}