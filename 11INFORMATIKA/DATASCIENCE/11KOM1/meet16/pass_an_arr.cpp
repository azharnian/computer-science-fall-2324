#include <iostream>
using namespace std;

void print_arr(int* arr, int l)
{
    for (int i = 0; i < l; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int len = sizeof(numbers)/sizeof(int);
    print_arr(numbers, len);
    return 0;
}