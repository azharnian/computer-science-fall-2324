#include <iostream>
using namespace std;

int main(){
    // int score1 = 72;
    // int score2 = 73;
    // int score3 = 33;
    // int scores[3];
    // scores[0] = 72;
    // scores[1] = 73;
    // scores[2] = 33;
    // int scores[3] = {72, 73, 33};
    int scores[] = {72, 73, 33};
    // cout << scores[0] << endl;
    // cout << scores[1] << endl;
    // cout << scores[2] << endl;
    cout << sizeof(scores) << endl;
    int length_of_scores = sizeof(scores) / sizeof(int);
    for (int i = 0; i < length_of_scores; i++)
    {
        cout << scores[i] << endl;
    }

    for (int score : scores)
    {
        cout << score << endl;
    }
    return 0;
}