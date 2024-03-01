#include <iostream>

struct Pacar 
{
    std::string name;
    bool gender;
    int age;
    double money;
    bool is_merried = false;

    Pacar(std::string n, bool g, int a, double mo) : name(n), gender(g), age(a), money(mo) {};

    // METHODS / ABILITY / SKILL
    void say_hi(){
        std::cout << "Hi, my name is " << this->name << std::endl;
    }

    void joged(){
        std::cout << "💃🏻 with me ...\n";
    }

    void makan(std::string makanan){
        std::cout << "Kuy makan..." << makanan << "\n";
    }

};

int main()
{   
    Pacar pacar_budi_1("Angel", 0, 20, 100000);
    Pacar pacar_budi_2("Viony", 0, 30, 1000000);

    pacar_budi_1.joged();
    pacar_budi_2.joged();
    pacar_budi_2.makan("Pisang Goreng ..");
    return 0;
}