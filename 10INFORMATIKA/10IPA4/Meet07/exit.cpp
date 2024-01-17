#include <iostream>
using namespace std;

int main(int argc, char *argv[]){
    if (argc > 1){
        cout << "Your friends : \n";
        for (int i = 1; i < argc; i++){
            cout << "\t" << argv[i] << endl;
        }
    } else {
        cout << "You don't have any friends yet.\n";
    }
    return 0;
}