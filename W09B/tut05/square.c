// COMP1511 Tut05 - 2D Arrays
// Modifying squares.c into a 2D array 
// Ada Luong, March 2022

#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            printf("1");
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}

/* DISCUSSION POINTS
 - How would you change it so that a 2D array of ints was created and each 
   element was given the value of 1?
 - How would you then print out this array so it looked the same as the original output?
 - What are the benefits of storing the values of the grid in a 2D array?
 */