#include <iostream>

struct Pacar {
    std::string name;
    int age;
    bool sex;

    Pacar(std::string n, int a) : name(n), age(a), sex(false){}
    Pacar(std::string n, int a, bool s) : name(n), age(a), sex(s){}

    void say_hi()
    {

    }

    void nongkrong()
    {

    }
};

int main()
{
    Pacar pacar_satu("Tania", 15, false);
    pacar_satu.say_hi();
    pacar_satu.nongkrong();

    Pacar pacar_dua("Sylvi", 18);
    pacar_dua.say_hi();
    pacar_dua.nongkrong();
    return 0;
}