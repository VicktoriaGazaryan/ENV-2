#include <iostream>
#include "Complex.h"
#include "Sort.h"

int main() {
    const int size = 5;
    Complex arr[size] = {
        Complex(3, 4),
        Complex(1, 1),
        Complex(0, 2),
        Complex(2, -2),
        Complex(-1, -1)
    };

    std::cout << "Complex numbers before sorting:\n";
    for (int i = 0; i < size; ++i) {
        arr[i].display();
        std::cout << std::endl;
    }

    sortComplexArray(arr, size);

    std::cout << "\nComplex numbers after sorting by absolute value:\n";
    for (int i = 0; i < size; ++i) {
        arr[i].display();
        std::cout << std::endl;
    }

    return 0;
}