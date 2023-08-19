#include <bits/stdc++.h>
using namespace std;

int main(){
    string name;
    int year;
    // cin >> name;
    cout << "Who are you ? ";
    getline(cin, name);
    cout << "Hi " << name << endl;
    cout << "What year were you born in ? ";
    cin >> year;
    cout << "Oh wow you are "<< (2023 - year) << " year(s) old\n";
    if ((2023 - year) > 30){
        cout << "You are already an elderly person\n";
    } else {
        cout << "Okay yolo....!\n";
    }
    return 0;
}