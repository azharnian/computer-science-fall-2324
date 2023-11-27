#include <iostream>
using namespace std;

int main(){
    string s = "HI!";
    cout <<(int)(s[0]) << endl;
    cout <<(int)(s[1]) << endl;
    cout <<(int)(s[2]) << endl;
    cout <<(int)(s[3]) << endl;
    for (int i = 0, len = s.length(); i < len; i++)
    {
        cout << s[i] << endl;
    }
    for (char c : s)
    {
        cout << c << endl;
    }
    return 0;
}