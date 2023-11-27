#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if (argc >= 2){
        printf("Hello, %s!\n", argv[1]);
        return 0;
    }
    printf("Hello, world!\n");
    return 1;
}