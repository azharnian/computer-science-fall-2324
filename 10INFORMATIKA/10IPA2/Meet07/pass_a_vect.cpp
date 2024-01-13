#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &vect){
    for (int item : vect)
    {
        cout << item << " ";
    }
    cout << endl;
}

int main(){
    vector<int> numbers = {1, 2, 3, 4, 5};
    print_vector(numbers);
    return 0;
}