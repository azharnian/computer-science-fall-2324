#include <iostream>
#include <vector>
using namespace std;

vector<int> swap(int a, int b)
{
    vector<int> res = {b, a};
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> swaps = swap(a, b);
    a = swaps[0], b = swaps[1];
    cout << a << " " << b << endl;
    return 0;
}