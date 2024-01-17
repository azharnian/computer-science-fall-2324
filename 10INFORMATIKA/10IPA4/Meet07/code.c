#include <stdio.h>

int main(){
    printf("Hello, world!\n");

    char name[] = "Your Name"; // string name = "your name"
    printf("Hello, %s\n", name);

    int a = 5, b = 4;
    printf("%d %d\n", a, b);

    float height;
    printf("Input your height : ");
    scanf("%f", &height);

    printf("Your height is %.2f cm.\n", height);
    return 0;
}