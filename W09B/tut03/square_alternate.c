// COMP1511 Tut03 - 2D while loops
// A program which prints out a square of asterisks
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int scanned_integer;
    printf("Please enter an integer: ");
    scanf("%d", &scanned_integer);

    // printing the number of rows of asterisks
    int row = 0;
    while (row < scanned_integer) {

        // printing the number of asterisks in a row
        // eg. **********
        int col = 0;
        while(col < scanned_integer) {
            printf("*");
            col += 1;
        }
        printf("\n");

        row += 1;
    }

    return 0;
}