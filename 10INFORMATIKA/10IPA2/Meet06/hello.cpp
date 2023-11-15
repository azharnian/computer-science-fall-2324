#include <iostream>
using namespace std;

int main(int argc, char* argv[]){
    if (argc <= 1){
        cout << "Hello!\n";
        return 1;
    }
    cout << "Hello, ";
    for (int i = 1; i < argc; i++)
    {
        cout << argv[i] << " ";
    }
    cout << "!" << endl;
    return 0;
}