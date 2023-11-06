#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    getline(cin, name);
    for (int i = 0; i < name.length(); i++){
        if ((int)(name[i]) >= 97 && (int)(name[i]) <= 122)
            cout << (char)((int)(name[i])-32);
        else
            cout << name[i];
    }
    cout << endl;
    return 0;
}