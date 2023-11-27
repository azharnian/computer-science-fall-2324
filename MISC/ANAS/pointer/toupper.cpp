#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string text = "anas";

    for (char &c: text)
    {
        c = toupper(c);
    }

    cout << text << endl;
    return 0;
}