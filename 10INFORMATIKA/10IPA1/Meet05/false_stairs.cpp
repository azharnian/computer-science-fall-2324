#include <iostream>
using namespace std;

int main(){
    int N = 5;
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (j > i)
                break;
            cout << "#";
        }
        cout << endl;
    }
    return 0;
}