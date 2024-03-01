#include <iostream>

struct  Person
{
    std::string name;
    float weight;
    float height;
    int age = 15;
    bool is_married = false;

    Person(std::string n, float w, float h) : name(n), weight(w), height(h) {};
};


int main()
{
    Person person("John Doe", 70, 170);
    Person felix("felix", 55.5, 165.4);
    Person putri("putri", 55, 164);
    std::cout << felix.name << std::endl;
    std::cout << putri.name << std::endl;
    return 0;
}