#include <iostream>
using namespace std;

int main(){
    int n = 50;
    int* p = &n;
    cout << &n << endl;
    cout << p << endl;

    cout << *p << endl;
    cout << n << endl;

    *p = *p + 10;
    cout << n << endl;
    return 0;
}