#include <iostream>
using namespace std;

int main(){
    char t[] = "BYE!";
    int len = (sizeof(t) / sizeof(char))-1 ;

    for (int i=0; i < len; i++)
    {
        cout << t[i] << endl;
    }
    return 0;
}