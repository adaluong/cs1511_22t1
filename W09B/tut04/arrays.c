// COMP1511 Tut04 - initialising and printing an array demo
// Ada Luong, March 2022

#include <stdio.h>

#define SIZE 5

void print_array(int array[SIZE], int length);

int main (void) {

    // int num1 = 1;
    // int num2 = 2;
    // int num3 = 3;
    // int num4 = 4;
    // int num5 = 5;

    // declaring and initialising an array of size 5
    int array[SIZE] = {1, 2, 3, 4, 5}; 
    
    // declaring an array and initialising every element to zero 
    int array1[SIZE] = {0};

    // declaring an array and initialising every element to one? 
    int array2[SIZE] = {1};
    int i = 0;
    while (i < SIZE) {
        array2[i] = 1;
        i++;
    }

    // printing every element of an array
    print_array(array2, SIZE);

    // what's the issue with accessing the array[5]
    // printf("%d", numbers[5]);
    // answer: accessing out of bounds
    // try gcc -o arrays arrays.c --> won't throw an error which is BAD

    return 0;
}

// Function to print the elements of an array
void print_array(int array[SIZE], int length) {
    int counter = 0;
    while (counter < length) {
        printf("%d ", array[counter]);
        counter++;
    }
}

/* THINGS TO KEEP NOTE OF
 * Declaring variable type
 * Naming the array
 * Size of the array
 * Initialising elements
 * Initialising all elements to zero 
 * Printing elements of an array
 * Printing in a function - the length parameter
 */