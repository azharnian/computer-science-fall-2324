#include <iostream>
using namespace std;

// CLASS
struct Person
{
    // ATTRIBUTE
    string name;
    double height;
    double weight;
    string hobby;
    int age = 0;
    bool is_merried = 0;

    // CONSTRUCTOR
    Person(string n, double h, double w) : name(n), height(h), weight(w){};

};

int main(){
    // INSTANCE
    Person rafa("Rafa", 160.5, 25);
    Person caterin("Caterin", 50, 3.5);

    cout << rafa.name << endl;
    cout << caterin.name << endl;
    return 0;
}