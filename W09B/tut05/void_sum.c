// COMP1511 Tut05 - Pointers & Functions
// Nicole Luong

#include <stdio.h>

void sum_nums(int a, int b, int *sum);

int main(void) {
    int a = 42;
    int b = 100;
    int sum = 0;

    sum_nums(a, b, &sum);
    
    printf("%d\n", sum);

    return 0;
}

void sum_nums(int a, int b, int *sum) {
    *sum = a + b;
}
