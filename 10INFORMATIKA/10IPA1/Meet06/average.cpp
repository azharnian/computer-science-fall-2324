#include <iostream>
using namespace std;

int main(){
    int numbers[] = {10, 10, 5};
    int total = 0;
    // for (int number : numbers)
    // {
    //     total += number;
    // }
    for (int i = 0; i < sizeof(numbers)/sizeof(int); i++)
    {
        total += numbers[i];
    }
    double result = total / (float)(sizeof(numbers)/sizeof(int));
    cout << result << endl;
    return 0;
}