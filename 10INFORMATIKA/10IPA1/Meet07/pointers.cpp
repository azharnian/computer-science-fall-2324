#include <iostream>
using namespace std;

int main()
{
    int a = 100;
    cout << &a << endl;
    int *p = &a;
    cout << p + 10 << endl;
    return 0;
}