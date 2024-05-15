#include <iostream>
using namespace std;

int numbers[] = {1, 5, 10, 20, 50, 100, 500};

bool linear_search(int target){
    for (int i=0, len=sizeof(numbers)/sizeof(int); i<=len; i++){
        if (target == numbers[i]){
            return true;
        }
    }
    return false;
}

int main()
{
    cout << linear_search(20) << endl;
    cout << linear_search(9) << endl;
    return 0;
}