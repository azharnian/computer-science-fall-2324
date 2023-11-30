#include <iostream>
using namespace std;

struct Person {
    string name = "Budi";
    int age = 30;
    bool is_merried = false;

    void say_hello(){
        cout << "Hello....\n";
    }
};

int main()
{
    Person person_1;
    cout << person_1.name << " is " << person_1.age << " years old now.\n";
    person_1.say_hello();
    return 0;
}