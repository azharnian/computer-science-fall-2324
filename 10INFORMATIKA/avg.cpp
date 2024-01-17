#include <iostream>
using namespace std;

int main(){
    int numbers[] = {80, 90, 100, 90, 87, 80, 90, 100, 90, 87, 80, 90, 100, 90, 87, 80, 90, 100, 90, 87, 80, 90, 100, 90, 87};

    int len_of_numbers = sizeof(numbers) /  sizeof(numbers[0]);
    cout << "Jumlah numbers : " << len_of_numbers << endl;
    int total = 0;
    for (int i = 0; i < len_of_numbers; i++){
        total += numbers[i];
    } 
    cout << total/(double)(len_of_numbers) << endl;
    return 0;
}