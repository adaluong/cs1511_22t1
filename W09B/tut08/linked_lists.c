// COMP1511 Tut08 - Linked Lists
// Ada Luong, April 2022

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 256

struct student *create_student(int zID, double mark, char *name);
void print_all_students(struct student *first_student);

struct student {
    int zID;
    double mark;
    char name[MAX_NAME_LENGTH];
    struct student *next_student;
};

int main(void) {

    struct student *gary = create_student(54321, 100, "gary");
    struct student *lara = create_student(12345, 100, "lara");
    struct student *john = create_student(00000, 100, "john");
    struct student *ada = create_student(11111, 100, "ada");
    struct student *joel = create_student(22222, 100, "joel");

    gary->next_student = lara;
    lara->next_student = john;
    john->next_student = ada;
    ada->next_student = joel;
    joel->next_student = NULL;

    print_all_students(gary);

    return 0;
}

// Function to print all students given the first node of the list
void print_all_students(struct student *first_student) {
    // creating a separate pointer to keep track of which student
    // we are printing (note: no malloc here!)
    struct student *current_student_ptr = first_student;
    while (current_student_ptr != NULL) {
        printf("name: %s\n", current_student_ptr->name);
        current_student_ptr = current_student_ptr->next_student; 
    }
}

// A function that creates and initialises a new student node
// and returns a pointer to it
struct student *create_student(int zID, double mark, char *name) {
    struct student *new_student_ptr = malloc(sizeof(struct student));
    new_student_ptr->zID = zID;
    new_student_ptr->mark = mark;
    strcpy(new_student_ptr->name, name);
    new_student_ptr->next_student = NULL;
    return new_student_ptr;
}