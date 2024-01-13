#include <iostream>
using namespace std;

void cout_arr(int len, int *arr){
    for (int i = 0; i < len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5};
    cout_arr(sizeof(numbers) / sizeof(int), numbers);

    int scores[] = {90, 98, 97, 100, 60};
    cout_arr(sizeof(scores) / sizeof(int), scores);
    return 0;
}