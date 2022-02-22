// COMP1511 Tut02 - variables, if statements, program flow
// Program to decide what kind of pasta you are
// Ada Luong, February 2022

#include <stdio.h>

int main (void) {

    printf("WHAT KIND OF PASTA ARE YOU?????\n");

    /* SETTING UP "TYPES OF PASTA" VARIABLES 
     * -------------------------------------
     * declaring a variable (integer)
     * assigning a value to the variable
     *
     */


    /* QUESTION ONE: ENTER A NUMBER
     * -------------------------------------     
     * scanning from the terminal
     * printing to the terminal
     * if statement conditions
     * -> using == instead of =
     * -> operators for comparison >, <, >=, <=, !
     * when do if statements run?
     *
     */ 


    /* QUESTION TWO: THREE CHOICES
     * -------------------------------------
     * program flow: else if vs another if
     * constants and #defines
     *
     */
    
    printf("\nWhich movie out of these three would you most want to watch now?\n");
    printf("1: \n");
    printf("2: \n");
    printf("3: \n");
    
    int movie_number;
    scanf("%d", &movie_number);

    /* DECIDING WHAT PASTA YOU ARE */

    return 0;
}