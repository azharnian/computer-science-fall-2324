#include <iostream>
using namespace std;

int a = 1, b = 2, c = 3, d = 4;

void print_one()
{
    cout << a <<" " << b << " " << c << " " << d << endl;
}

void print_two()
{
    int a = 90, c = 80;
    cout << a << " " << c << " " << d << endl;
}

int main(){
    int a = 10, b = 20;
    cout << a << " " << b << endl;
    print_one();
    print_two();
    return 0;
}