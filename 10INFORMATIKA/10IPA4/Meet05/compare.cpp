#include <iostream>
using namespace std;

int main(){
    long x, y;
    cin >> x >> y;
    if (x < y)
    {
        cout << "x is less than y\n";
    }
    else if (x > y)
    {
        cout << "x is greater than y\n";
    }
    else
    {
        cout << "x is equal to y\n";
    }
    return 0;
}