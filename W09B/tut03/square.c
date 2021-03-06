// COMP1511 Tut03 - 2D while loops
// A program which prints out a square of asterisks
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int scanned_integer;
    printf("Please enter an integer: ");
    scanf("%d", &scanned_integer);

    int row = 0;
    while(row < scanned_integer) {

        ////////////////////////////////////////////
        // similar to when we had `printf("*****\n")`
        // except now with a variable number of asterisks
        int col = 0;
        while(col < scanned_integer) {
            printf("*");
            col++;
        }
        printf("\n");
        ////////////////////////////////////////////

        row++;
    }

    return 0;
}