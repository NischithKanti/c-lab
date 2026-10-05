#include <iostream>

// Inline function for the smaller of two integers
inline int minVal(int a, int b) {
    return (a < b) ? a : b;
}

// Overloaded inline function for the smallest of three integers
inline int minVal(int a, int b, int c) {
    return minVal(minVal(a, b), c);
}

int main() {
    std::cout << "Min of 12 and 7: " << minVal(12, 7) << std::endl;
    std::cout << "Min of 15, 3, and 9: " << minVal(15, 3, 9) << std::endl;
    return 0;
}
