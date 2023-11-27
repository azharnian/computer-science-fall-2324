#include <iostream>
using namespace std;

int main(){
    string s = "HI!";

    for (int i = 0, len = s.length(); i < len; i++)
    {
        cout << (int)(s[i]) << endl;
    }
    cout << (int)(s[3]) << endl;

    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}