#include <iostream>
using namespace std;

int main(){
    string s = "HI!";

    for (char t : s)
    {
        cout << t << endl;
    }

    for (int i=0; i < s.length(); i++)
    {
        cout << s[i] << endl;
    }
    return 0;
}