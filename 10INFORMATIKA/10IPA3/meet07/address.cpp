#include <iostream>
using namespace std;

int main()
{
    int n = 100;
    cout << &n << endl;

    int *add = &n;
    cout << add << endl;

    *add += 10;
    cout << n << endl;
    return 0;
}