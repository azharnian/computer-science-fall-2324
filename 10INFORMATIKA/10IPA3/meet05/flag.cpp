#include <iostream>
using namespace std;

int main(){
    bool play = true;
    string input;
    while (play)
    {
        cout << "Play!\n";
        cout << "exit (yes/no) ? ";
        cin >> input;
        if (input == "yes")
            play = false;
    }
    return 0;
}