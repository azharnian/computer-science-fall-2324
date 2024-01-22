#include <iostream>
using namespace std;

int main(){
    int age = 0;
    cout << "How old are you ? ";
    cin >> age;

    if (age >= 17){
        cout << "Access Granted.\n";
        return 0;
    }
    cout << "Permission Denied.\n";
    return 1;
    
}