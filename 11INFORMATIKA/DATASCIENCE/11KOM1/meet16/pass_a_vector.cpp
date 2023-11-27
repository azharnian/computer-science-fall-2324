#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &N)
{
    // for (int n : N)
    // {
    //     cout << n << " ";
    // }
    for (int i = 0, l = N.size(); i < l; i++)
    {
        cout << N[i] << " ";
    }
    cout << endl;
}

int main(){
    // vector<int> numbers = {1, 2, 3, 4, 5};
    vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);
    print_vector(numbers);
    return 0;
}