#include <iostream>

struct Car 
{
    std::string make;
    std::string model;
    int year;
    std::string color;
    int odometer = 0;

    Car(std::string ma, std::string mo, int y, std::string co) : make(ma), model(mo), year(y), color(co) {}

    void increment_odo(int n = 1)
    {
        odometer += n;
    }

    void describe()
    {
        std::cout << "...\n";
    }

};

struct Battery {
    float capacity = 100;

    void show_capacity()
    {
        std::cout << capacity << "%,\n";
    }
};

struct  ElectricCar : Car
{
    Battery battery;
    bool is_used;

    ElectricCar(std::string ma, std::string mo, int y, std::string co, bool used) : Car(ma, mo, y, co), is_used(used) {}

};


int main()
{
    ElectricCar my_tesla("Tesla", "S Model", 2023, "red", false);
    my_tesla.describe();
    my_tesla.battery.show_capacity();
    return 0;
}