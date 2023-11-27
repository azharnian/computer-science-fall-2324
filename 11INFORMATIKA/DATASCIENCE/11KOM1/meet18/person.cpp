#include <iostream>
#include <string>
using namespace std;

struct Person{
    string name;
    int age;
    int money;
    float weight;
    bool is_merried;

    Person(): name("John"), age(0) {}
    Person(string n, int a) : name(n), age(a) {}

    void display_name(){
        cout << "My name is " << name << endl;
    }

    void sing_a_song(string title = "Happy birth day"){
        cout << name << " sings " << title << endl;
    }

};

int main(){
    Person person_1("budi", 10);
    // cout << person_1.name << " is " << person_1.age << " years old\n";
    person_1.display_name();

    Person person_2;
    person_2.display_name();
    person_2.sing_a_song();
    return 0;
}