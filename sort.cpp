#ifndef SORT_H
#define SORT_H
#include "Sort.h"
#include "Complex.h"
void sortComplexArray(Complex* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j].absolute() > arr[j + 1].absolute()) {
                Complex temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
   #endif // SORT_H  
}