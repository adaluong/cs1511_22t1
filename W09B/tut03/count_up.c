// COMP1511 Tut03 - while loop basics
// Program reads an integer n and then prints the integers 1..n, one per line
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    int end_number;
    printf("Enter finish: ");
    scanf("%d", &end_number);

    int current_number = 1;
    while(current_number <= end_number) {

        printf("%d\n", current_number);

        current_number = current_number + 1;
    }

    return 0;
}