// Emily Chen & Tom Kunc
// Defines a linked list and basic functions to debug it

struct node {
	int data;				// data item at this node
	struct node *next;		// pointer to the next node
};

// Prints the data of a linked list
void print_list(struct node *head);

// Returns a copy of a linked list
struct node *copy(struct node *old_head);

// Returns a new linked list where it is the second appended to the first
struct node *list_append(struct node *first_list, struct node *second_list);

// Returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *first_list, struct node *second_list);

// Given two linked lists in strictly increasing order returns a new linked list
//  containing a copy of the elements found in both lists.
struct node *set_intersection(struct node *first_list, struct node *second_list);
