#include <iostream>
using namespace std;

void cout_arr(int arrc, int *arr){
    for (int i = 0; i < arrc; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    int len_of_numbers = sizeof(numbers)/sizeof(numbers[0]);
    cout_arr(len_of_numbers, &numbers[0]);

    int scores[] = {100, 90, 80, 70};
    cout_arr(sizeof(scores)/sizeof(scores[0]), scores);
    return 0;
}