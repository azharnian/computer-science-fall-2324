#include <iostream>
using namespace std;

int main(int argc, char *argv[]){

    if (argc >= 2){
        cout << "Hello, " << argv[1] << "\n";
        for (int i = 1; i < argc; i++)
        {
            cout << "\t" << argv[i] << "\n";
        }
    }
    else {
        cout << "Hello, world!\n";
    }
    return 0;
}