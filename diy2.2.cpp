#include <iostream>
#include <cmath>

// Power function with a default argument for the exponent
long long power(int base, int exp = 2) {
    long long result = 1;
    for (int i = 0; i < exp; ++i) {
        result *= base;
    }
    return result;
}

int main() {
    // Uses the default argument (exp = 2) -> 5^2
    std::cout << "power(5) = " << power(5) << std::endl;      // Output: 25
    
    // Overrides the default argument -> 2^10
    std::cout << "power(2, 10) = " << power(2, 10) << std::endl;  // Output: 1024
    return 0;
}
