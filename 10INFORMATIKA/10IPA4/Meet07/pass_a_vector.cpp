#include <iostream>
#include <vector>
using namespace std;

void cout_vector(vector<int> &vect){
    // for (int i = 0, len = vect.size(); i < len; i++)
    // {
    //     cout << vect[i] << " ";
    // }
    for (int n : vect){
        cout << n << " ";
    }
    cout << endl;
}

int main(){
    vector<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    cout_vector(numbers);
    return 0;
}