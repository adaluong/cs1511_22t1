// COMP1511 Tut 07 - fgets
// Write a program which reads lines from its input and prints them twice.
// You can assume lines contain at most 4096 characters.
//
// Ada Luong, March 2022

#include <stdio.h>

#define MAX_SIZE 4096

int main (void) {
    
    // char *fgets(char *s, int size, FILE *stream);
    char buffer[MAX_SIZE];
    fgets(buffer, MAX_SIZE, stdin);

    printf("%s", buffer);
    printf("%s", buffer);

    return 0;
}