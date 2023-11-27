#include <iostream>
using namespace std;

void print_arr(int* arr,int len_arr)
{
    for (int i = 0; i < len_arr; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int numbers[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(numbers) / sizeof(int);
    print_arr(numbers, len);
    return 0;
}