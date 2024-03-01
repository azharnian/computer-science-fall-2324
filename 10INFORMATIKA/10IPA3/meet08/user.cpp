#include <iostream>
using namespace std;

struct User {
    string first_name;
    string last_name;
    int age;

    User(string f, string l, int a) : first_name(f), last_name(l), age(a) {};

    void describe(){

    }

    void greet(){

    }

};

int main(){
    User user("Anton", "Siregar", 20);
    cout << user.first_name << endl;
    cout << user.last_name << endl;
    user.describe();
    user.greet();
    return 0;
}