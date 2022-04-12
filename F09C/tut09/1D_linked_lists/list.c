// Program to do various linked list exercises
// Ada Luong, April 2022

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "helper_list.h"

int main(void) {
    int list1_array[5] = {1, 2, 3, 4, 5};
    struct node *list1 = create_list(list1_array, 5);
    print_list(list1);
    free_list(list1);
}

struct node *copy(struct node *old_head) {
    // copy should call malloc to create a new linked list of the 
    // same length and which contains the same data.
    return NULL;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // Why do we need to make sure it is a new list? 
    // Why can't we just change the first list's final node's next pointer
    // to the second list's head?
    return NULL;
}

int identical(struct node *first_list, struct node *second_list) {
    // i.e. same length and same values in data fields
    // malloc should not create (malloc) any new list elements
    return -1;
}

struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    // should call malloc to create the nodes of the new linked list
    return NULL;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}
