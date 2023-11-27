#include <iostream>
#include <string>
using namespace std;

struct Pacar {
    string name;
    string sex;
    int age;

    Pacar() : name("Jane"), sex("wanita"), age(20) {}
    Pacar(string n) : name(n), sex("wanita"), age(16) {}
    Pacar(string n, string s, int a) : name(n), sex(s), age(a) {}

    void say_hi(){
        cout << "Hai, nama saya " << name << endl;
    }

    void sing(string title="My heart will go on"){
        cout << "Saya akan bernyanyi bersama kamu, lagunya " << title << endl;
    }

};

int main() {
    Pacar pacar_1("Cindi", "wanita", 15);
    Pacar pacar_2("Stela", "wanita", 18);
    Pacar pacar_3("Aisyah");
    Pacar pacar_4;

    pacar_1.say_hi();
    pacar_2.sing("Baby");
    pacar_3.sing();
    pacar_4.say_hi();
    return 0;
}
