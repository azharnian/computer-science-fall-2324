#include <iostream>
using namespace std;

int main(){

    bool running = true;
    while (running){
        int N;
        cin >> N;
        if (N == 0)
            running = false;
        cout << N;
    }

    return 0;
}