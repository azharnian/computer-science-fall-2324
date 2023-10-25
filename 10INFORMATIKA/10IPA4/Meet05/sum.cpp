#include <iostream>
using namespace std;

int main(){
    // 4, 14, 24, 34, ...
    int total = 0;
    for (int i = 4; i < 100; i += 10)
    {
        total += i;
    }
    cout << total << endl;

    total = 0;
    int i = 4;
    while (i < 100)
    {
        total += i;
        i += 10;
    }
    cout << total << endl;

    // 101, 96, 91, 86, ... >0
    total = 0;
    for (int i = 101; i > 0; i -= 5)
    {
        total += i;
    }
    cout << total << endl;
    return 0;
}