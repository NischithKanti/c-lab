#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    // Constructor
    Rectangle() : length(0), width(0) {}

    // Setters with validation
    void setLength(double l) {
        if (l >= 0) {
            length = l;
        } else {
            std::cout << "Error: Length cannot be negative. Value not changed.\n";
        }
    }

    void setWidth(double w) {
        if (w >= 0) {
            width = w;
        } else {
            std::cout << "Error: Width cannot be negative. Value not changed.\n";
        }
    }

    // Getters for calculated properties
    double area() const {
        return length * width;
    }

    double perimeter() const {
        return 2 * (length + width);
    }
};

int main() {
    Rectangle rect;
    
    // Testing validation
    rect.setLength(5.5);
    rect.setWidth(-3.0); // Will trigger error message
    rect.setWidth(4.0);

    std::cout << "Rectangle Area: " << rect.area() << "\n";
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << "\n";

    return 0;
}
