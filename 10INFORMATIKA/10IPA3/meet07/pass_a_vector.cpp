#include <iostream>
#include <vector>
using namespace std;

void cout_vector(vector<int> &vect){
    for (int i = 0, len = vect.size(); i < len; i++)
    {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main(){
    // vector<int> numbers = {10, 20, 30};
    vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    cout_vector(numbers);

    vector<int> scores;
    scores.push_back(100);
    scores.push_back(90);
    scores.push_back(80);
    scores.push_back(70);
    scores.push_back(100);
    cout_vector(scores);
    return 0;
}