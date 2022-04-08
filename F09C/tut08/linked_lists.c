// COMP1511 Tut08 - Linked Lists
// Ada Luong, April 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student *create_student(int zID, double mark, char *name);
void print_student_list(struct student *first_student);

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next_student;
};

int main(void) {

    // harry -> lucy -> X
    struct student *harry = create_student(0000, 100, "harry");
    struct student *lucy = create_student(0001, 100, "lucy");
    struct student *kazi = create_student(0002, 100, "kazi");
    struct student *branda = create_student(0003, 100, "branda");
    struct student *chung = create_student(0004, 100, "chung");

    harry->next_student = lucy;
    lucy->next_student = kazi;
    kazi->next_student = branda;
    branda->next_student = chung;
    chung->next_student = NULL;

    print_student_list(harry);

    return 0;
}

void print_student_list(struct student *first_student) {
    struct student *current_student = first_student;
    while(current_student != NULL) {
        printf("%s\n", current_student->name);
        current_student = current_student->next_student;
    }
}

// A function that creates a new struct student
// and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student_ptr = malloc(sizeof(struct student));
    new_student_ptr->zID = zID;
    new_student_ptr->mark = mark;
    strcpy(new_student_ptr->name, name);
    new_student_ptr->next_student = NULL;
    return new_student_ptr;
}