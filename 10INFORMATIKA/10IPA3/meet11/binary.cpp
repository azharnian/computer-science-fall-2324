#include <iostream>
using namespace std;

int numbers[] = {1, 5, 10, 20, 50, 100, 500};
bool binary_search(int target);
int main()
{
    cout << binary_search(10) << endl;
    cout << binary_search(75) << endl;
    return 0;
}

bool binary_search(int target)
{   
    int len, left, mid, right;
    len = sizeof(numbers)/sizeof(int);
    left = 0;
    right = len-1;
    while (left <= right){
        mid = (left + right)/2;
        if (target < numbers[mid]){
            right = mid-1;
        } else if (target > numbers[mid]){
            left = mid+1;
        } else {
            return true;
        }
    }
    return false;
}