#include <iostream>
using namespace std;

int main(){
    int n = 50;

    cout << &n << endl;

    int *p = &n;

    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    *p = 100;
    cout << n << endl;

    int **pp = &p;

    cout << **pp << endl;
    cout << sizeof(long long) << endl;
    cout << sizeof(int*) << endl;

    return 0;
}