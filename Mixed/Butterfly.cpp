#include <iostream>

int main() {
    // Draw the butterfly pattern
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if ((i == 0 && (j == 1 || j == 3)) ||
                (i == 1 && (j == 0 || j == 2 || j == 4)) ||
                (i == 2 && (j == 1 || j == 3)) ||
                (i == 3 && j == 2) ||
                (i == 4 && (j == 1 || j == 3))) {
                std::cout << "*";
            } else {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }

    return 0;
}