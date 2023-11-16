#include <iostream>
using namespace std;

int main(){
    int n = 50;

    cout << &n << endl;

    int *p = &n;

    cout << p << endl;
    cout << *p << endl;
    return 0;
}