#include <stdio.h>

int main()
{
    printf("Hello, world!\n");

    char name[] = "Budi Santoso";
    printf("Hello, %s!\n", name);

    int age = 30;
    printf("I'm %d years old.\n", age);

    float weight = 70.5;
    printf("My weight is %.2f kg.\n", weight);


    int x, y;
    scanf("%d-%d", &x, &y);
    printf("%d\n", x + y);
    return 0;
}