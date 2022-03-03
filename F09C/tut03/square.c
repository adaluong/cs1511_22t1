// COMP1511 Tut03 - 2D while loops
// A program which prints out a square of asterisks
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int scanned_integer;
    printf("Please enter an integer: ");
    scanf("%d", &scanned_integer);

    int row_number = 0;
    while (row_number < scanned_integer) {
        
        // print out a variable number of asterisks
        // depending on what the scanned integer is
        // printf("*****\n");

        int asterisks_in_row = 0;
        while (asterisks_in_row < scanned_integer) {
            
            if (asterisks_in_row <= row_number) {
                printf("*");
            } else {
                printf("-");
            }

            asterisks_in_row++;
        }
        printf("\n");

        row_number++;
    }


    return 0;
} 