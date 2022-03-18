// COMP1511 Tut05 - Pointers
// A short program to illustrate how pointers work
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    // note: don't have these as actual variable names
    // create an integer num
    // dumbledore has my $20
    int dumbledore = 20; 

    // create a pointer which stores the address of num
    int *snape = &dumbledore;

    // print the address of dumbledore
    printf("the address of dumbledore is %p\n", &dumbledore);
    printf("the address of dumbledore is %p\n", snape);

    // printing the address of pointer
    printf("the address of pointer is %p\n", &snape);

    // dereference the pointer
    printf("the value of dumbledore is %d\n", dumbledore);
    printf("the value of dumbledore is %d\n", *snape);

    return 0;
}