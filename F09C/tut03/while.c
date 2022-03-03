// COMP1511 Tut03 - while loop basics
// A program to print "hello" 10 times
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int counter = 0;
    while (counter < 10) {
        printf("hello\n");
        counter++;
    }

    return 0;
} 