// COMP1511 Tut03 - while loop basics
// A program to print "hello" 10 times
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int loop_counter = 0;
    while(loop_counter < 10) {
       
        printf("hello\n");

        loop_counter++;
    }

    return 0;
}