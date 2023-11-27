#include <iostream>
using namespace std;

//global
int a, b, temp;

void swap(){
    a += b;
    b = a - b;
    a -= b;
    cout << &a << " " << &b << endl;
}

int main(){
    cin >> a >> b;
    // temp = a;
    // a = b;
    // b = temp;
    swap(a, b);
    cout << a << " " << b << endl;
    cout << &a << " " << &b << endl;
    return 0;
}
