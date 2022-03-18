// COMP1511 Tut 05 - Pointers & Functions
// Write a void function which places the sum of two numbers 
// inside a variable passed in by reference, 
// then show its usage in the main function.
//
// Ada Luong, March 2022

#include <stdio.h>

void sum_nums(int num1, int num2, int *sum, int *product) {
    // dereferencing sum (going to where sum is pointing to)
    // and changing the original variable 
    *sum = num1 + num2; 

    // there's no way to return two variables in a function
    // without using pointers
    *product = num1 * num2;
}

int main(void) {
    
    int a = 42;
    int b = 100;
    int sum = 0;
    int product = 1;

    sum_nums(a, b, &sum, &product);
    
    printf("sum: %d, product: %d\n", sum, product);

    return 0;
}
