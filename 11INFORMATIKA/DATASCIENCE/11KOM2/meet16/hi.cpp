#include <iostream>
#include <string>
using namespace std;

int main(){
    string s = "HI!";
    printf("%c\n", s[1]);
    printf("size of s : %d\n", sizeof(s));
    printf("size of string : %d\n",sizeof(string));
    for (int i = 0, len = s.length(); i < len; i++)
    {
        printf("%c ", s[i]); 
    }
    printf("\n");

    for (char c : s)
    {
        printf("%c ", c);
    }
    printf("\n");

    printf("%d\n", (int)(s[3]));
    return 0;
}