#include <iostream>
using namespace std;

int main(int argc, char *args[]){

    if (argc > 1){
        cout << "Your friends :\n";
        for (int i = 1; i < argc; i++)
        {
            cout << "\t" << args[i] << endl;
        }
        return 0;
    } else {
        cout << "You don't have any friends ?\n";
        return 999;
    }
        
   
}