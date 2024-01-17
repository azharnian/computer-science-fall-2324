#include <iostream>

int main(int argc, char *args[]){

    if (argc > 1) {
        std::cout << "Hello, " << args[1] << std::endl;
    } else {
        std::cout << "Hello, world!\n";
    }
    return 0;
}