#include <iostream>
using namespace std;

struct User {
    string first_name;
    string last_name;
    int age;

    User(string f, string l, int a) : first_name(f), last_name(l), age(a) {};

    void describe(){
        cout << "My name is " << first_name << " " << last_name << ". And I'm " << age << " years old.\n";
    }

    void greet(){
        cout << "Hello, I'm " << last_name << endl;
    }
};
int main()
{
    User user_1("Anton", "Siregar", 20);
    cout << user_1.first_name << endl;
    cout << user_1.last_name << endl;

    user_1.describe();
    user_1.greet();
    return 0;
}