#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:
    // Set data values
    void setData(double r, double i) {
        real = r;
        imag = i;
    }

    // Display formatted output
    void display() const {
        std::cout << real;
        if (imag >= 0) {
            std::cout << " + " << imag << "i\n";
        } else {
            std::cout << " - " << -imag << "i\n";
        }
    }
};

int main() {
    // Array of 3 complex numbers
    Complex numbers[3];

    // Populating data
    numbers[0].setData(3.0, 4.5);
    numbers[1].setData(-1.2, -2.0);
    numbers[2].setData(0.0, 7.1);

    // Printing the array elements
    std::cout << "List of Complex Numbers:\n";
    for (int i = 0; i < 3; i++) {
        std::cout << "Element [" << i << "]: ";
        numbers[i].display();
    }

    return 0;
}
