#include <iostream>

struct Person
{
    std::string name = "John";
    int age = 30;
    double height = 175.5;

};

int main()
{
    Person person_1;
    Person person_2;
    std::cout << "Name : " << person_1.name << std::endl;
    std::cout << "Name : " << person_2.name << std::endl;
    return 0;
}