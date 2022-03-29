// COMP1511 Tut 07 - Strings
// A short program to demonstrate the difference between char[] and char*
// This is good to understand, but not essential for 1511
// You'll explore these ideas in much more detail if you do 1521
// 
// Ada Luong, March 2022

#include <stdio.h>

int main(void) {

    // this is an array of characters 
    // with a hidden null terminator \0 at the end
    // which is added since we used the "double quotes"
    char string_arr[] = "hello\n";
    // {'h','e','l','l','o','\0'}

    // this is a pointer to a series of characters with a \0 at the end
    char *string_ptr = "world\n";

    // there are some subtle differences between the two
    // - you can assign a pointer to point somewhere else but not an array
    // - you can change an element in an array but not a pointer
    string_ptr = string_arr;
    string_arr[0] = 'a';

    printf("%s", string_arr);
    printf("%s", string_ptr);

    return 0;
}