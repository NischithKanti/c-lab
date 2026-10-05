#include <iostream>
#include <stdexcept>

class Stack {
private:
    int* buffer;
    int capacity;
    int topIndex;

public:
    // Constructor allocating the array buffer
    Stack(int cap) : capacity(cap), topIndex(-1) {
        buffer = new int[capacity];
    }

    // Destructor to release the array buffer
    ~Stack() {
        delete[] buffer;
    }

    // Push an element onto the stack
    void push(int val) {
        if (topIndex >= capacity - 1) {
            throw std::runtime_error("Stack Overflow");
        }
        buffer[++topIndex] = val;
    }

    // Pop an element from the stack
    int pop() {
        if (topIndex < 0) {
            throw std::runtime_error("Stack Underflow");
        }
        return buffer[topIndex--];
    }
};
