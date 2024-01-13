#include <iostream>
using namespace std;

int main(int argc, char *args[]){
    if (argc > 1){
        cout << "Hello, " << args[1] << endl;
        return 0;
    }
    cout << "Hello\n";
    return 1;
}