#include <iostream>
using namespace std;

int main(){
    int scores[] = {72, 73, 33};
    cout << sizeof(scores) << endl;
    cout << sizeof(int) << endl;
    int len = sizeof(scores) / sizeof(int);
    int total = 0;
    for (int i = 0; i < len; i++)
    {
        total += scores[i];
    }
    float avg = total / (float)(len);
    cout << avg << endl;
    return 0;
}