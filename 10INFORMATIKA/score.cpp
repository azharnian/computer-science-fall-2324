#include <iostream>
using namespace std;

int main(){
    int scores[3];
    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    // cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;
    return 0;
}