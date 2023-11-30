#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    for (int i = 0, len = input.length(); i < len; i++)
    {
        cout << (char)(toupper(input[i]));
    } cout << endl;
    return 0;
}