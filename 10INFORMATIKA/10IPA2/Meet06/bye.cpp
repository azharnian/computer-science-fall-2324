#include <iostream>
using namespace std;

int main(){
    char t[] = "BYE!";
    cout << t << endl;
    // for (char c: t)
    // {
    //     cout << c << endl;
    // }
    int len = sizeof(t) / sizeof(char);
    cout << len << endl;
    for (int i = 0; i < len; i++)
    {
        cout << t[i] << endl;
    }
    return 0;
}