#include <iostream>
using namespace std;

struct Car {
    string merk;
    string model;
    int year;
    long odometer = 0; // DEFAULT ATTRIBUTE

    Car(string me, string mo, int y) : merk(me), model(mo), year(y){};

    void describe(){
        cout << "This car made by " << merk << " model " << model << " year " << year << endl;
    }
};

struct Battery {
    string name;
    double capacity = 75;
    Battery(string n) : name(n) {};
    void show_capacity(){
        cout << "Battery : " << capacity << "%.\n";
    }
};
struct ElectricCar : Car {
    Battery battery;
    ElectricCar(string me, string mo, int y, string bn) : Car(me, mo, y), battery(bn) {};

};
int main(){
    Car my_toyota("Toyota", "Avanza", 2024);
    my_toyota.describe();

    ElectricCar my_tesla("Tesla", "S", 2024, "Panasonic");
    my_tesla.describe();
    my_tesla.battery.show_capacity();

    return 0;
}