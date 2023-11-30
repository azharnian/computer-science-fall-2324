#include <iostream>

struct Rectangle
{
    std::string owner;

    Rectangle(std::string o, double l, double w) : owner(o), length(l), width(w) {}

    double calculate_area() const {

        return length * width;
    }

    double get_length() const {
        return length;
    }

    void describe_name() const {
        printf("This rect belongs to %s\n", owner.c_str());
    }

    private:
        double length;
    
    protected:
        double width;
    
    
};

struct ColorRect : Rectangle {

    ColorRect(std::string o, std::string c, double l, double w) : Rectangle(o, l, w), color(c) {}

    void display_info() const {
        printf("Rectangle %s Information :\n", owner.c_str());
        printf("\tLength: %.1f units\n", get_length());
        printf("\tWidth: %.1f units\n", width);
        printf("\tArea is %.2f square units\n", calculate_area());
        printf("\tits color is %s\n", color.c_str());
        describe_name();
    }

    private:
        std::string color;

};


int main()
{
    ColorRect rect_1("Anas", "Blue", 10, 20);
    rect_1.display_info();
    rect_1.describe_name();
    return 0;
}