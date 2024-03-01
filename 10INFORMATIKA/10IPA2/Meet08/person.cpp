#include <iostream>

struct Person
{
    // ATRIBUTES
    std::string name;
    int age;
    double height;
    bool gender;
    bool is_merried = false;

    // CONSTRUCTOR
    Person(std::string n, int a, double h, bool g) : name(n), age(a), height(h), gender(g) {};
};

int main()
{   
    Person person_1("Cindy", 20, 170.5, 0);
    std::cout << person_1.name << std::endl;

    Person person_2("Susi", 18, 175, 0);
    std::cout << person_2.name << std::endl;
    return 0;
}