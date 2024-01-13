#include <cstdio>

int main(){
    printf("Hello, world!\n");

    char name[] = "Anas";
    printf("Hello, %s\n", name);

    float PI = 3.14159;
    printf("Value of PI is %.2f\n", PI);

    int a = 0;
    printf("Input value of a : ");
    scanf("%d", &a);
    printf("Your input is : %d.\n", a);
    return 0;
}