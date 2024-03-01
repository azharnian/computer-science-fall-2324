#include <iostream>

struct Pacar 
{
    // ATTRIBUTES
    std::string name;
    bool sex;
    int sat_score;
    float ielts_score;

    // CONSTRUCTOR
    Pacar() : name("Emi"), sex(0), sat_score(1000), ielts_score(6){};

    Pacar(std::string n, bool s, int sat, float ielts) : name(n), sex(s), sat_score(sat), ielts_score(ielts){};

    // METHOD / ABILITY / SKILL
    void jalan_jalan(std::string to){
        std::cout << "kuy.... jalan-jalan ke" << to << std::endl;
    }

    void nonton_film(std::string film){
        std::cout << "netflix and chill... filmnya " << film << std::endl;
    }

    void makan(std::string makanan){
        std::cout << "terserah ... pokoknya makan " << makanan << std::endl;
    }
};

int main()
{
    Pacar pacar_1("Cindy", 0, 1300, 8.5);
    Pacar pacar_2("Susi", 0, 900, 7);
    Pacar pacar_3;

    std::cout << "Name : " << pacar_1.name << std::endl;
    pacar_1.jalan_jalan("ptc");
    std::cout << "Name : " << pacar_2.name << std::endl;
    pacar_2.nonton_film("pertualangan sherina");
    std::cout << "Name : " << pacar_3.name << std::endl;
    pacar_3.makan("ketoprak");
    return 0;
}