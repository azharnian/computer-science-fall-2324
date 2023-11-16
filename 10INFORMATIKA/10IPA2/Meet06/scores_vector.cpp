#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector<int> scores = {72, 73, 33};
    vector<int> scores;
    scores.push_back(72);
    scores.push_back(73);
    scores.push_back(33);
    for (int i = 0, len = scores.size(); i < len; i++){
        cout << scores[i] << " ";
    }
    cout << endl;

    scores.pop_back();
    for (int i = 0, len = scores.size(); i < len; i++){
        cout << scores[i] << " ";
    }
    cout << endl;

    // scores.clear();
    // for (int i = 0, len = scores.size(); i < len; i++){
    //     cout << scores[i] << " ";
    // }
    // cout << endl;

    scores.insert(scores.begin(), 90);
    for (int i = 0, len = scores.size(); i < len; i++){
        cout << scores[i] << " ";
    }
    cout << endl;
    return 0;
}