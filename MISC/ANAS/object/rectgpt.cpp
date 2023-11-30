#include <iostream>

// Define a struct for a Rectangle
struct Rectangle {
private:
    double length;   // private member
protected:
    double width;    // protected member

public:
    // Constructor
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Public member function to calculate area
    double calculateArea() const {
        return length * width;
    }

    double get_length() const {
        return width;
    }
};

// Define a struct for a ColoredRectangle, inheriting from Rectangle
struct ColoredRectangle : public Rectangle {
private:
    std::string color;   // private member for color

public:
    // Constructor
    ColoredRectangle(double len, double wid, const std::string& col)
        : Rectangle(len, wid), color(col) {}

    // Public member function to display information, including area
    void displayInfo() const {
        std::cout << "Rectangle Information:\n";
        std::cout << "   Length: " << get_length() << " units\n";
        std::cout << "   Width: " << width << " units\n";
        std::cout << "   Area: " << calculateArea() << " square units\n";
        std::cout << "   Color: " << color << "\n";
    }
};

int main() {
    // Create a ColoredRectangle object
    ColoredRectangle coloredRect(5.0, 3.0, "Blue");

    // Access public and protected members using public member functions
    coloredRect.displayInfo();

    // Accessing private members directly is not allowed outside the struct
    // coloredRect.length;  // Error: 'double Rectangle::length' is private

    // Accessing protected members directly is not allowed outside the struct
    // coloredRect.width;   // Error: 'double Rectangle::width' is protected

    return 0;
}
