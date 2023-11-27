#include <iostream>
using namespace std;

int main(){
    char t[] = "BYE!";
    int len_t = (sizeof(t) / sizeof(char)) - 1;

    for (int i = 0; i < len_t; i++)
    {
        cout << t[i] << endl;
    }

    for (char c : t)
    {
        cout << c << endl;
    }
    return 0;
}