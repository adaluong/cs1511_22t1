// COMP1511 Tut02 - variables, if statements, program flow
// Quiz to determine what kind of pasta you are

#include <stdio.h>

#define SHREK               1
#define SPIDERMAN_COMP1511  2
#define SHREK_3             3
    
int main (void) {

    printf("WHAT KIND OF PASTA ARE YOU?????\n");

    /* SETTING UP "TYPES OF PASTA" VARIABLES */
    int macaroni = 0; 
    int spiral = 0;

    /* QUESTION ONE: ENTER A NUMBER */
    printf("How many socks would you like to have: ");
    int number_of_socks = 0;
    int scanf_return = scanf("%d", &number_of_socks); 
    
    if (scanf_return != 1) {
        // hasn't successfully scanned in a number
        printf("User did not enter an integer. Returning early");
        return 1;
    }
  
    // checking that scanf works
    printf("number of socks is %d\n", number_of_socks);
    
    if (number_of_socks == 0) {
        macaroni += 1;
        if (number_of_socks > 12) {
            macaroni = macaroni + 2;
        }
    }

    if (number_of_socks > 3) {
        spiral += 5;
    }
    
    if (number_of_socks > 1 && number_of_socks < 10) {
        macaroni += 2;    
    }
    
    if (number_of_socks > 0) {
        macaroni = macaroni + number_of_socks;
    } else {
        spiral = spiral + 5;
    }


    /* QUESTION TWO: THREE MOVIE CHOICES */

    printf("\nWhich movie out of these three would you most want to watch now?\n");
    printf("Type in a number from the options below\n");
    printf("1: Shrek\n");
    printf("2: Spiderman: COMP1511\n");
    printf("3: Shrek 3\n");

    int movie_choice;
    printf("Enter a number to signifiy your movie choice: ");
    scanf("%d", &movie_choice);
    
    if (movie_choice == SHREK) {
        spiral += 2;
    } else if (movie_choice == SPIDERMAN_COMP1511) {
        macaroni += 1;
    } else if (movie_choice == SHREK_3) {
        spiral++; // same as spiral = spiral + 1
    } else {
        printf("Invalid movie choice");
    }

    /* DECIDING WHAT PASTA YOU ARE */
    if (macaroni > spiral) {
        printf("You are MACARONI :3 \n");
    } else {
        printf("You are SPIRAL!!! \n");
    }

    return 0;
}
