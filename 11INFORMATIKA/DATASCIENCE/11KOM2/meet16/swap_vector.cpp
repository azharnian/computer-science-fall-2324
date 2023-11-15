#include <iostream>
#include <vector>
using namespace std;

vector<int> swap(int a, int b)
{
    vector<int> result; // = {b, a};
    result.push_back(b), result.push_back(a);
    return result;
}

int main(){
    int a, b;
    cin >> a >> b;
    vector<int> res = swap(a, b);
    a = res[0], b = res[1];
    cout << a << " " << b << endl;
    return 0;
}