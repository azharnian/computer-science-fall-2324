#include <iostream>
using namespace std;

int a, b;

void swap(){
    a += b;
    b = a - b;
    a -= b;
}

int main(){
    cin >> a >> b;
    swap();
    cout << a << " " << b << endl;
    return 0;
}