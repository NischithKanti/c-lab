#include <iostream>
#include <algorithm>

class Matrix {
private:
    int rows;
    int cols;
    int** grid; // Pointer to an array of pointers

public:
    // Parameterized Constructor
    Matrix(int m, int n) : rows(m), cols(n) {
        grid = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            grid[i] = new int[cols]{0}; // Initializes all elements to 0
        }
    }

    // Deep Copy Constructor
    Matrix(const Matrix& other) : rows(other.rows), cols(other.cols) {
        grid = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            grid[i] = new int[cols];
            // Copy elements individually to ensure deep copy
            std::copy(other.grid[i], other.grid[i] + cols, grid[i]);
        }
    }

    // Destructor to free dynamic memory
    ~Matrix() {
        for (int i = 0; i < rows; ++i) {
            delete[] grid[i]; // Free each row
        }
        delete[] grid;        // Free the array of row pointers
    }

    // Helper to set values
    void setValue(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            grid[r][c] = value;
        }
    }

    // Helper to print matrix
    void print() const {
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                std::cout << grid[i][j] << " ";
            }
            std::cout << "\n";
        }
    }
};