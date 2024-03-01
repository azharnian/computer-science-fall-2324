#include <iostream>

struct Pacar {

    // ATTRIBUTES (DATA MEMBER)
    std::string name;
    int age;
    bool gender;
    double money;
    float ielts;

    // CONSTRUCTOR
    Pacar(std::string n, int a, bool g, double m, float i) :
    name(n), age(a), gender(g), money(m), ielts(i) {}


    // METHODS / SKILL / FUNCTION
    void sleep_call(){
        std::cout << this->name << " is sleeping.. zzz.. zzz.. zzz.." << std::endl;
        // std::cout << name << " is sleeping.. zzz.. zzz.. zzz.." << std::endl;
    }

    void driving(){
        std::cout << "mau kemana ? " << std::endl;
    }

    void flirting(){
        std::cout << "uhuy ... " << std::endl;
    }

    void karaoke(std::string song){
        std::cout << "kuy ... nyanyi ... judul lagunya " << song << std::endl;
    }

};

int main()
{
    Pacar pacar_1("yosi", 18, 0, 10000, 6);
    Pacar pacar_2("anisa", 20, 0, 200000, 7);

    pacar_1.karaoke("aishiteru");
    pacar_1.sleep_call();
    pacar_2.sleep_call();
    return 0;
}