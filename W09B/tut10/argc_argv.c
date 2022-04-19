// Tut 10 - prints out the values of argc and argv
// Ada Luong, April 2022

#include <stdio.h>
#include <ctype.h>

int main (int argc, char* argv[]) {

    printf("argc = %d\n", argc);

    int i = 0;
    while (i < argc) {
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }

    return 0;
}

/* QUESTIONS 
 * how would you modify the following to exclude the name of the program?
 * what about so that all command line arguments are printed in upper case?
 * - you can use the toupper() function from <ctype.h>
 * /