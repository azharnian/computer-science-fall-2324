#include <iostream>
using namespace std;

int main(){
    int scores[] = {72, 73, 33};
    for (int i = 0; i < 3; i++)
    {
        cout << scores[i] << endl;
    }
    for (int score : scores)
    {
        cout << score << endl;
    }
    int total = 0;
    for (int score : scores)
    {
        total += score;
    }
    cout << total << endl;       
    return 0;
}