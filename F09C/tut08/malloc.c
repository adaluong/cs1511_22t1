// COMP1511 Tut08 - Malloc
// Ada Luong, April 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student *create_student(int zID, double mark, char *name);

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
};

int main(void) {


    return 0;
}

// A function that creates a new struct student
// and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    
}