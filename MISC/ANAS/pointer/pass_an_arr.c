#include <stdio.h>

void print_arr(int n, int* arr)
{
    for (int i=0; i < n; i++)
    {
        printf("%d ", arr[i]);
    };
    printf("\n");
}

int main()
{
    int my_arr[] = {72, 73, 33};
    int len = sizeof(my_arr) / sizeof(int);
    print_arr(len, my_arr);
    return 0;
}