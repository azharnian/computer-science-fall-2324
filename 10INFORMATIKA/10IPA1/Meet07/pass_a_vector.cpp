#include <iostream>
#include <vector>
using namespace std;

void cout_vect(vector<int> &vect){
    for(int i = 0, l = vect.size(); i < l; i++ )
    {
        cout << vect[i] << " ";
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
    cout_vect(numbers);

    // for (int i = 0, len = numbers.size(); i < len; i++)
    // {
    //     cout << numbers[i] << " ";
    // }
    // cout << endl;
    return 0;
}