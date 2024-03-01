#include <iostream>
using namespace std;

struct Pacar{
    string name;
    bool gender;
    string religion;
    int age;
    double money;

    Pacar(string n, bool g, string r, int a, double mo) : name(n), gender(g), religion(r), age(a), money(mo){};

    // METHODS / ABILITY / SKILL
    void jalan_jalan(string tujuan){
        cout << "Kuy jalan-jalan... ke " << tujuan << endl;
    }

    void nonton(string film){
        cout << "Netflix and chill... film " << film << endl;
    }
    
};

int main(){
    Pacar pacar_adly_1("Hafizah", 0, "Islam", 21, 10000);
    Pacar pacar_adly_2("Rose", 0, "Kristen", 16, 0);
    cout << pacar_adly_1.name << endl;
    pacar_adly_1.jalan_jalan("PTC");
    pacar_adly_1.nonton("Avatar");
    cout << pacar_adly_2.name << endl;
    return 0;
}