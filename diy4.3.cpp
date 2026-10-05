#include <iostream>

class Tracer {
public:
    Tracer() { std::cout << "Tracer created\n"; }
    ~Tracer() { std::cout << "Tracer destroyed\n"; }
};

int main() {
    std::cout << "--- Correct Usage (No Leak) ---\n";
    for (int i = 0; i < 2; ++i) {
        Tracer* t = new Tracer();
        delete t; // Object properly destroyed
    }

    std::cout << "\n--- Leaking Usage ---\n";
    for (int i = 0; i < 2; ++i) {
        Tracer* t = new Tracer();
        // delete t; // Omitted! The memory is leaked here.
    }

    return 0;
}
