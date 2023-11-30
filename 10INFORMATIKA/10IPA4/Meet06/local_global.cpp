#include <iostream>
using namespace std;
int a = 1, b = 2, c = 3, d = 4;

void func()
{
    cout << a << " " << b << " " << c << " " << d << endl;
}

int main()
{
    int a = 10, b = 20, c = 30;
    cout << a << " " << b << " " << c << " " << d << endl;
    func();
    return 0;
}