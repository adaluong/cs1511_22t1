// COMP1511 Tut05 - 2D Arrays
// A function that takes in a 2D array of ints
// and multiplies every value in the array by a given int
// Ada Luong, March 2022


#include <stdio.h>

void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar);
void print_matrix(int rows, int columns, int matrix[rows][columns]);

int main(void) {
    int matrix[ROWS][COLUMNS] = {{1,2,3},
                                {4,5,6},
                                {7,8,9}};

    printf("original matrix:\n");
    print_matrix(ROWS, COLUMNS, matrix);

    ////////////////////////////////////////
    // CALL YOUR SCALAR MULTIPLY FUNCTION HERE
    // 
    //////////////////////////////////////// 
    
    
    printf("new matrix:\n");
    print_matrix(ROWS, COLUMNS, matrix);

    return 0;
}

// Loop through a 2D array and multiply every element by a given scalar
void scalar_multiply(int rows, int columns, int matrix[rows][columns], int scalar) {
    // TODO: COMPLETE THIS FUNCTION
}

//  Function to print a 2D array
void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    int r = 0;
    while (r < rows) {
        int c = 0;
        while (c < columns) {
            printf("%d ", matrix[r][c]);
            c++;
        }
        printf("\n");
        r++;
    }
    printf("\n");
}