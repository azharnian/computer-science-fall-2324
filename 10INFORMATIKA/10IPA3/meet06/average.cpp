#include <iostream>
using namespace std;

int main(){
    int scores[] = {72, 73, 33};
    // cout << sizeof(scores) << endl;
    // cout << sizeof(int) << endl;
    int length = sizeof(scores)/sizeof(int);
    // cout << length << endl;
    int total = 0;
    for (int i = 0; i < length; i++)
    {
        total += scores[i];
    }
    double avg = total / (float)(length);
    cout << avg << endl;
    return 0;
}