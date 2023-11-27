#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            cout << (char)((int)(name[i]) - 32);
        else
            cout << name[i];
    }
    cout << endl;
    return 0;
}