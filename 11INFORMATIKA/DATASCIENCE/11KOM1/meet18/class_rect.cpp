#include <iostream>

class Rect {

    private:
        int width;

    protected :
        int height;

    public :
        std::string name;

        Rect(std::string n, int w, int h) : name(n), width(w), height(h){}

        double get_area() const
        {
            return (float) (width) * height;
        }

        int get_width() const // getter method
        {
            return width;
        }

        void set_height(int n) // setter method
        {
            height = n;
        }


};

class ColorRect : public Rect {
    std::string color;

    ColorRect(std::string n, int w, int h, std::string co) : Rect(n, w, h), color(co) {}

    double get_perimeter() const 
    {
        return 2 * get_width() + 2 * height;
    }
};

int main()
{
    Rect my_rect("my rect",10, 20);
    std::cout << my_rect.get_area() << std::endl;

    std::cout << my_rect.get_width() << std::endl;

    ColorRect my_second_rect("my second rect", 20, 30, "red");
    my_second_rect.get_perimeter();

    return 0;
}