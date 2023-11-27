#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> scores = {72, 73, 33};
    // scores.push_back(72);
    // scores.push_back(73);
    // scores.push_back(33);
    // int len = scores.size();
    for (int i = 0, len = scores.size(); i < len; i++)
    {
        cout << scores[i] << " ";
    }
    cout << endl;

    for (int score : scores)
    {
        cout << score << " ";
    }
    cout << endl;

    scores.pop_back();
    for (int score : scores)
    {
        cout << score << " ";
    }
    cout << endl;

    // scores.clear();
    scores.insert(scores.begin(), 90);
    scores.insert(scores.end(), 100);
    scores.erase(scores.end()-2);

    for (int score : scores)
    {
        cout << score << " ";
    }
    cout << endl;

    return 0;
}