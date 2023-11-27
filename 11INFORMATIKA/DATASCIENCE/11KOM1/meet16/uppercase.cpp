#include <iostream>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (char t : s)
    {
        cout << (char) ((int)(t) - 32);
    }
    cout << endl;
    return 0;
}