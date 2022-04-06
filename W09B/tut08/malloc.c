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

    struct student *frankie = create_student(5, 1000, "frankie");
    printf("the zID of frankie is: %d\n", frankie->zID);

    return 0;
}

// A function that creates a new struct student and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student_ptr = malloc(sizeof(struct student));
    new_student_ptr->zID = zID;
    new_student_ptr->mark = mark;
    strcpy(new_student_ptr->name, name);
    return new_student_ptr;
}