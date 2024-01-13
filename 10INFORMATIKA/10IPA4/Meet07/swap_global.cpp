#include <iostream>
using namespace std;

int a = 5, b = 4; // global variable

void swap(){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    cout << a << " " << b << endl;
    swap();
    cout << a << " " << b << endl;
    return 0;
}