#include <iostream>
using namespace std;

int main(){
    for (int brick = 0; brick < 4; brick++)
    {
        cout << "#" ;
    }
    cout << endl;
    for (int brick = 0; brick < 3; brick++)
    {
        cout << "#" << endl;
    }

    for (int i = 0; i < 4; i++){
        for (int brick = 0; brick < 10; brick++)
        {
            cout << "#" ;
        }
        cout << endl;
    }

    
    

    return 0;
}