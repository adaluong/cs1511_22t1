// COMP1511 Tut07 - Struct Pointers
// Ada Luong, March 2022 

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student {
    int zID;
    double wam;
    char name[MAX_NAME_LENGTH];
};

int main(void) {

    // create a variable `frankie` which is a `struct student`

    // create a variable `frankie_pointer` that points to this new struct

    // and change frankie's wam to 100
    
    // what is the use of the -> operator? change the previous code to use it

    return 0;
}

// ADDITIONAL NOTE ABOUT `STRCPY`
// this is memory-unsafe and we don't use it in industry
// we only use it in 1511 because it is useful and simple