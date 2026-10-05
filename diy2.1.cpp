#include <iostream>
#include <cmath>

// Volume of a cube (1 argument)
double volume(double side) {
    return side * side * side;
}

// Volume of a cuboid (3 arguments)
double volume(double length, double width, double height) {
    return length * width * height;
}

// Volume of a cylinder (2 arguments: radius and height)
double volume(double radius, double height) {
    const double PI = 3.141592653589793;
    return PI * radius * radius * height;
}

int main() {
    std::cout << "Cube volume (side=3): " << volume(3.0) << std::endl;
    std::cout << "Cuboid volume (2x3x4): " << volume(2.0, 3.0, 4.0) << std::endl;
    std::cout << "Cylinder volume (r=2, h=5): " << volume(2.0, 5.0) << std::endl;
    return 0;
}
