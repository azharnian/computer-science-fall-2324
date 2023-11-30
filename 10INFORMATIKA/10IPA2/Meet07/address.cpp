#include <iostream>
using namespace std;

int main(){
    int n = 50;

    cout << &n << endl;

    int *p = &n;

    cout << p << endl;
    *p += 10;

    cout << n << endl;
    cout << p + 10 << endl;
    return 0;
}