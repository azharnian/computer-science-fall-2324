#include <stdio.h>

int main(){
    float a, t;
    scanf("%f-%f", &a, &t);
    float area = (a * t) / 2;
    printf("area : %.2f\n", area);
    return 0;
}