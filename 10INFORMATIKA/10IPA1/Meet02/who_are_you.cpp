#include <iostream>
using namespace std;

int main(){
    string name;
    int age;

    cout << "What's your name ? ";
    // cin >> name;
    getline(cin, name);
    cout << "Hi " << name << endl;
    cout << "How old are you? ";
    cin >> age;
    if (age > 30){
        cout << "Tua ya ...\n";
    } else {
        cout << "Masih muda sekali.\n";
    }
    return 0;
}