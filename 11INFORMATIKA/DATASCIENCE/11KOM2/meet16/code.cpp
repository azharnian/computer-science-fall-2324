#include <cstdio>

int main(){
    int number = 100;
    float PI = 3.14159;
    printf("Hello, world!\n");
    printf("This is %d\n", number);
    printf("This is PI : %f\n", PI);
    printf("This is PI : %.2f\n", PI);

    int width, length;
    scanf("%d:%d", &width, &length);
    printf("width : %d, length %d.\n", width, length);
    return 0;
}