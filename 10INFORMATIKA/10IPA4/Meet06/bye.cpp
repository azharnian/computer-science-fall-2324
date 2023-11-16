#include <iostream>
using namespace std;

int main(){
    char t[] = "BYE!";

    for (int i = 0, len = sizeof(t)/sizeof(char)-1; i < len; i++)
    {
        cout << t[i] << endl;
    }
    for (char c : t){
        cout << c << endl;
    }
    return 0;
}