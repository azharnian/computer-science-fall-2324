#include <iostream>
using namespace std;

int main(){
    bool running = true;
    int N;
    while (running)
    {
        cout << "input your number (0 to stop) : ";
        cin >> N;
        if (N != 0)
            cout << "Your number is " <<  N <<  endl;
        else
            running = false;
    }   
    return 0;
}