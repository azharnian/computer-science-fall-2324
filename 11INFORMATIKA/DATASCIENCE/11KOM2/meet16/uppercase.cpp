#include <iostream>
#include <cctype>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for (char c : s)
    {
        // cout << (char)(toupper(c));
        if (c >= 'a' && c <= 'z')
            cout << (char)((int)(c) - 32);
        else
            cout << c;
    }
    cout << endl;
    return 0;
}