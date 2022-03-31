// COMP1511 Tut 07 - fgets
// Write a program which reads lines from its input and prints them twice.
// You can assume lines contain at most 4096 characters.
//
// Ada Luong, March 2022

#include <stdio.h>

#define MAX_CHARACTERS 4096

int main (void) {
    
    // char *fgets(char *s, int size, FILE *stream);
    char string[MAX_CHARACTERS];
    fgets(string, MAX_CHARACTERS, stdin);

    printf("%s", string);
    printf("%s", string);

    return 0;
}