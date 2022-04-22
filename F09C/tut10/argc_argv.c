// Tut 10 - prints out the values of argc and argv
// Ada Luong, April 2022

#include <stdio.h>
#include <ctype.h>

void print_upper_case(char *string);

int main(int argc, char *argv[]) {

    // {"./argc_argv", "hello", "1511!"};
    printf("argc = %d\n", argc);
    int i = 1;
    while (i < argc) {
        print_upper_case(argv[i]);
        // printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }

    return 0;
}

void print_upper_case(char *string) {
    // printf("%s\n", string);
    int i = 0;
    while (string[i] != '\0') {
        // printf("%c", string[i]);
        putchar(toupper(string[i]));
        i++;
    }
    printf("\n");
}

/* QUESTIONS 
 * how would you modify the following to exclude the name of the program?
 * - what line(s) would I change?
 * what about so that all command line arguments are printed in upper case?
 * - you can use the toupper() function from <ctype.h>
 */