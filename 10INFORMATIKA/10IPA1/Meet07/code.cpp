#include <cstdio>

int main()
{   
    char name[] = "Anas";
    int age = 10;
    float ielts = 7.5;
    printf("Hello, world!\n");
    printf("Hello, %s.\n", name);
    printf("I'm %d years old.\n", age);
    printf("I got %f.\n", ielts);
    printf("I got %.2f.\n", ielts);

    int a, b;
    printf("Masukkan nilai a : ");
    scanf("%d", &a);

    printf("Masukkan nilai b : ");
    scanf("%d", &b);

    printf("Hasil penjumlahannya  = %d.\n", a + b);

    int c, d;
    scanf("%d %d", c, d);
    

    return 0;
}