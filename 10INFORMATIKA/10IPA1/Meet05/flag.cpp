#include <iostream>
using namespace std;

int main(){
    int number;
    bool running = true;
    while (running){
        cout << "Input your number : ";
        cin >> number;
        if (number == 0)
            running = false;
        cout << "Your number is " << number << endl;
    }
    return 0;
}