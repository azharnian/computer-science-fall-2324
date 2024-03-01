#include <iostream>
using namespace std;

struct Car {
    string model;
    string merk;
    short year;
    long odometer = 0; // DEFAULT ATTRIBUTE

    Car(string mo, string me, short y) : model(mo), merk(me), year(y) {};

    void describe(){
        cout << "This car made by " << merk << " model " << model << " year " << year << endl;
    }

};

struct Battery {
    string name;
    double capacity;

    Battery(string bat_n, double cap) : name(bat_n), capacity(cap) {}

    void show() {
        cout << "Battery: " << name << ", Capacity: " << capacity << "%" << endl;
    }
};

struct ElectricCar : Car {
    Battery battery;

    ElectricCar(string mo, string me, short y, string bat_n) : Car(mo, me, y), battery(bat_n, 100) {}

    void describe() {
        Car::describe();
        battery.show();
    }
};

int main(){
    ElectricCar my_tesla("S", "Tesla", 2024, "Panasonic");
    my_tesla.describe();
    // my_tesla.show_battery_capacity();
    my_tesla.battery.show();
    cout << my_tesla.battery.name << endl;
};