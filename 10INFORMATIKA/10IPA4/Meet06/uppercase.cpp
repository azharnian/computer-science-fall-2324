#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for (int i = 0, len = s.length(); i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << (char)((int)(s[i]) -32);
        else
            cout << s[i];
    }
    cout << endl;
    return 0;
}