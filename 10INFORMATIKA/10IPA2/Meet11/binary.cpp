#include <iostream>
using namespace std;

int numbers[] = {1, 5, 10, 20, 50, 100, 500};
bool binary_search(int target);

int main(){
    cout << binary_search(100) << endl;
    cout << binary_search(17) << endl;
    return 0;
}

bool binary_search(int target){
    int len = sizeof(numbers)/sizeof(int);
    int left = 0, right = len-1, mid;

    while (left <= right){
        mid = (left + right)/2;
        if(target == numbers[mid]){
            return true;
        } else if (target > numbers[mid]){
            left = mid + 1;
        } else if (target < numbers[mid]){
            right = mid - 1;
        }
    }
    return false;
}