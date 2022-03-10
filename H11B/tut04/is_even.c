// COMP1511 Tut04 - function basics
// A function which takes in an integer and returns 1 if it is an even 
// number and 0 if it is not

#include <stdio.h>

#define TRUE 1
#define FALSE 0

int is_even(int number);

int main (void) {

    int user_input;
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // if the number is even
    if (is_even(user_input) == 0) {
        printf("Your train has been cancelled\n");
    }

    return 0;
}

int is_even(int number) {
    int even_number = FALSE;
    if (number % 2 == 0) {
        even_number = TRUE;
    }
    return even_number;
}