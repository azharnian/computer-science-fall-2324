#include <iostream>
using namespace std;

struct Restaurant {
    // ATTRIBUTES / DATA MEMBER
    string name;
    string cuisine_type;

    // CONSTRUCTOR
    Restaurant(string n, string t) : name(n), cuisine_type(t) {};

    // METHODS
    void describe(){
        cout << "This is a " << this->name << " Restaurant, and we serve " << this->cuisine_type << " food.\n";
    }

    void open(){
        cout << "We are open now!\n";
    }
};

int main()
{
    Restaurant restaurant("Pagi Sore", "Padang");
    cout << restaurant.name << endl;
    cout << restaurant.cuisine_type << endl;
    restaurant.describe();
    restaurant.open();

    Restaurant restaurant_2("Pindang Umak", "Palembang");
    cout << restaurant_2.name << endl;
    cout << restaurant_2.cuisine_type << endl;
    restaurant_2.describe();
    restaurant_2.open();
    return 0;
}