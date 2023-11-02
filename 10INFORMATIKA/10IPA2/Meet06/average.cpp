#include <iostream>
using namespace std;

int main(){
    int numbers[] = {72, 73, 33};
    int total = 0;
    // cout << sizeof(numbers) << endl;
    int len = sizeof(numbers)/sizeof(int);
    for (int i = 0; i < len; i++){
        total += numbers[i];
    }

    cout << total / (float)(len) << endl;
    return 0;
}