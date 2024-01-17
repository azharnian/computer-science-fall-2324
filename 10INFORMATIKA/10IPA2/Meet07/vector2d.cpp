#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector< vector<int>> numbers;

    vector<int> row;
    row.push_back(1);
    row.push_back(2);
    row.push_back(3);

    numbers.push_back(row);

    return 0;
}