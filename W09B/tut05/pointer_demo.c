// COMP1511 Tut05 - Pointers
// Nicole Luong

#include <stdio.h>

int main(void) {
    
    int number = 45;
    int *number_pointer = &number;

    // Print
    printf("number = %d at address %p\n", number, &number);
    printf("number_pointer holds address %p and value inside is %d\n", number_pointer, *number_pointer);
    
    
    // Print 
    // address stored in pointer
    // value of dereferenced pointer
    // address of pointer

    return 0;
}
