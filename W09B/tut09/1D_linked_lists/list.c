// Program to do various linked list exercises
// Ada Luong, April 2022

#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "helper_list.h"

#define IDENTICAL     1
#define NOT_IDENTICAL 0

int main(void) {
    int list1_array[5] = {1, 2, 3, 4, 5};
    struct node *list1 = create_list(list1_array, 5);
    print_list(list1);
    free_list(list1);
}


struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    // Return new if linked list is initially empty
    if (head == NULL) {
        return new;
    }

    // Otherwise, loop to end of list and add node.
    struct node *curr = head;
    while (curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = new;

    // We are inserting at the end --> head will not change
    return head;
}

struct node *copy(struct node *old_head) {
    // copy should call malloc to create a new linked list of the 
    // same length and which contains the same data.
    if (old_head == NULL) {
        return NULL;
    }
    struct node *new_head = create_node(old_head->data);

    // new_prev keeps track of the previous node before the new one
    struct node *new_prev = new_head;
    // old_curr keeps track of the data from the old linked list we want to copy
    struct node *old_curr = old_head->next;

    while (old_curr != NULL) {
        struct node *new = create_node(old_curr->data);
        new_prev->next = new;
        new_prev = new_prev->next;
        old_curr = old_curr->next;
    }

    return new_head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // Why do we need to make sure it is a new list? 
    // Why can't we just change the first list's final node's next pointer
    // to the second list's head?
    if (first_list == NULL) {
        return copy(second_list);
    }

    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);
    
    struct node *curr = first_copy;
    while (curr->next != NULL) {
        curr = curr->next;
    }

    curr->next = second_copy;

    return first_copy;
}

int identical(struct node *first_list, struct node *second_list) {
    // i.e. same length and same values in data fields
    // malloc should not create (malloc) any new list elements
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;

    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data != second_curr->data) {
            return NOT_IDENTICAL;
        }
        first_curr = first_curr->next;
        second_curr = second_curr->next;
    }

    if (first_curr != NULL || second_curr != NULL) {
        return NOT_IDENTICAL;
    }

    return IDENTICAL;
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements
// in both set1 and set2
struct node *set_intersection(
    struct node *first_list,
    struct node *second_list
) {
    struct node *head = NULL;

    // Loop through both lists at the same time.
    // We're not going to be at exactly the same place
    // in both lists, we might move asymetrically
    // based on which numbers are higher in which list.
    struct node *first_curr = first_list;
    struct node *second_curr = second_list;
    // We don't need to check if either is NULL because that means there are extra
    // hanging elements which aren't a part of either.
    while (first_curr != NULL && second_curr != NULL) {
        if (first_curr->data < second_curr->data) {
            // Since the data from the first list is less than the data from
            // the second list, we need to move it along
            first_curr = first_curr->next;
        } else if (second_curr->data < first_curr->data) {
            // Since the data from the second list is less than the data from
            // the first list, we need to move it along
            second_curr = second_curr->next;
        } else {
            // The last case is if both first_curr and second_curr hold the same
            // data which is when we add it and then increment them both
            head = add_last(head, first_curr->data);
            first_curr = first_curr->next;
            second_curr = second_curr->next;
        }
    }

    return head;
}

void print_list(struct node *head) {
    struct node *curr = head;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}
