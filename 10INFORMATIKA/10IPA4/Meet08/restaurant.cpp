#include <iostream>
using namespace std;

struct Restaurant{
    // ATTRIBUTES - DATA MEMBERS
    string name;
    string cuisine_type;

    // CONSTRUCTOR
    Restaurant(string n, string c) : name(n), cuisine_type(c) {};

    // METHODS
    void describe(){
        cout << "This restaurant is " << name << ", We serve " << cuisine_type << " food.\n";
    }

    void open(){
        cout << "We are open now!\n";
    }

};

int main(){
    Restaurant restaurant_1("Pagi Sore", "Padang");
    cout << restaurant_1.name << endl;
    cout << restaurant_1.cuisine_type << endl;

    restaurant_1.describe();
    restaurant_1.open();

    Restaurant restaurant_2("KFC", "Fast");

    return 0;
}