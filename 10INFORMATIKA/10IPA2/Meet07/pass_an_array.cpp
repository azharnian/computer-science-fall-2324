#include <iostream>
using namespace std;

void cout_arr(int arrc, int *arr){
    for (int i = 0; i < arrc; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};

    // cout_arr(sizeof(numbers)/ sizeof(int), &numbers[0]);
    cout_arr(sizeof(numbers)/ sizeof(int), numbers);

    int scores[] = {100, 90, 98, 95};
    cout_arr(sizeof(scores)/ sizeof(int), scores);
    return 0;
}