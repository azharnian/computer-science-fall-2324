#include <iostream>
using namespace std;

int main(){
    char t[] = "bye!";
    // cout << sizeof(t) << endl;
    // cout << sizeof(char) << endl;
    
    int length = sizeof(t)/sizeof(char) - 1;
    for (int i = 0; i < length; i++){
        cout << (int)(t[i]) << endl;
    }
    return 0;
}