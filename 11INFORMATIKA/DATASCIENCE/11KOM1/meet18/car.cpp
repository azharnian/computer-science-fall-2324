#include <iostream>
#include <string>
using namespace std;

struct Vehicle {
    string type;

    Vehicle(string t) : type(t) {}
};

struct Car : Vehicle {
    string make;
    string model;
    int year;
    int odometer;

    Car(string ma, string mo, int y) : Vehicle("car"), make(ma), model(mo), year(y), odometer(0) {}

    void increment_odometer(int n = 1){
        odometer += n;
    }

    void describe(){
        cout << "this is a " << type << ", made by " << make << endl;
    }

};

int main(){
    Car my_tesla("Tesla", "S Series", 2023);
    my_tesla.describe();
    return 0;
}