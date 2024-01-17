#include <iostream>
using namespace std;

void cout_array(int arrc, int *arr){
    for (int i = 0; i < arrc; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int len_numbers = sizeof(numbers) / sizeof(int);
    cout_array(len_numbers, &numbers[1]);

    int scores[] = {100, 90, 80, 70};
    cout_array(sizeof(scores)/sizeof(int), scores);
    return 0;
}