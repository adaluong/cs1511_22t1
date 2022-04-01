// Struct Pointers

#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 20

// Struct student definition
struct student {
  int zID;
  double wam;
  char name[MAX_NAME_LENGTH];
};

int main(void) {

    // Declare a variable named stu of type struct student
    struct student stu;

    // Declate a pointer to my student struct
    struct student *stu_pointer = &stu;

    stu_pointer->zID = 5123456;     // instead of (*stu_pointer).zID = 5123456;
    stu_pointer->wam = 74.7;
    strcpy(stu_pointer->name, "Frankie");

    // Print statement for debugging
    printf("%d, %.2lf, %s\n", stu.zID, stu.wam, stu.name);
    return 0;
}

// ADDITIONAL NOTE ABOUT `STRCPY`
// this is memory-unsafe and we don't use it in industry
// we only use it in 1511 because it is useful and simple