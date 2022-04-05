// COMP1511 Tut08 - Linked Lists
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
    struct student *new_student = malloc(sizeof(struct student));
    new_student->zID = zID;
    new_student->mark = mark;
    strcpy(new_student->name, name);
    return new_student;
}