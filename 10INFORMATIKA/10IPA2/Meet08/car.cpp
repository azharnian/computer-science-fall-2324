#include <iostream>
using namespace std;

struct Car {
    string merk;
    string model;
    short year;
    long odometer = 0; // DEFAULT ATTRIBUTE

    Car(string me, string mo, short y) : merk(me), model(mo), year(y) {};

    void describe(){
        cout << "This car made by " << merk << " model " << model << " year : " << year << ".\n";
    }
};

struct Battery {
    string name;
    double capacity = 75;

    Battery(string n) : name(n) {};

    void show_capacity(){
        cout << "Battery : " << capacity << "%\n";
    }

};

struct ElectricCar : Car {
    Battery battery;

    ElectricCar(string me, string mo, short y, string bn) : Car(me, mo, y), battery(bn) {};

    void show_battery_capacity(){
        cout << "Battery : " << this->battery.capacity << "%\n";
    }
};

int main(){
    ElectricCar my_tesla("Tesla", "S", 2024, "Panasonic");
    my_tesla.describe();
    my_tesla.show_battery_capacity();
    my_tesla.battery.show_capacity();
    return 0;
}