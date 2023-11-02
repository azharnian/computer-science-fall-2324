#include <iostream>
using namespace std;

int main(){
    // horizontal
    for (int brick = 0; brick < 4; brick++)
    {
        cout << "O";
    }
    cout << endl;
    // vertical
    for (int brick = 0; brick < 4; brick++)
    {
        cout << "O\n";
    }
    // wall
    for (int i = 0; i < 5; i++){ // i-> baris / row
        // horizontal
        for (int j = 0; j < 20; j++) // j -> kolom / col
        {
            cout << "O";
        }
        cout << endl;
    }
    return 0;
}