// COMP1511 Tut04 - function basics
// A function which takes in an integer and returns 1 
// if it is an even number and 0 if it is not

#include <stdio.h>

#define TRUE    1
#define FALSE   0

int is_even(int number);

int main (void) {

    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    
    if (is_even(user_input) == TRUE) {
        printf("Your train has been cancelled today.\n");
    }

    return 0;
}

// A function which takes in an integer and returns 1 
// if it is an even number and 0 if it is not
int is_even(int number) {
    int number_is_even = FALSE;
    if (number % 2 == 0) {
        number_is_even = TRUE;
    }
    return number_is_even;   
}
