#include <iostream>

struct Person
{
    std::string name;
    int age;
    bool is_merried;

    Person() : name("John"), age(0), is_merried(false){}
    Person(std::string n, int a) : name(n), age(a), is_merried(false){}

    void say_hello()
    {
        std::cout << "Hello !"<< " my name is " << name << "\n";
    }
};

int main()
{
    Person bryan("Bryan", 16);
    bryan.say_hello();
    return 0;
}