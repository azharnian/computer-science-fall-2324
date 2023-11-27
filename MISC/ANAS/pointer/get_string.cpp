#include <iostream>
#include <string>
using namespace std;

void print_string(string t)
{
    cout << t << endl;
}

void print_arr(int &a)
{
    for (int n : a)
    {
        cout << n << endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5};
    print_string("anas");
    print_arr(arr);
    return 0;
}