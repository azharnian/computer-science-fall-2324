#include <iostream>
using namespace std;

int main(){
    string name;
    int age;
    cout << "What's your name ? ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    cout << "How old are you ? ";
    cin >> age;
    if (age < 30){
        cout << "Yolo!!!\n";
    } else {
        cout << "Already an eldery person!\n";
    }
    return 0;
}
