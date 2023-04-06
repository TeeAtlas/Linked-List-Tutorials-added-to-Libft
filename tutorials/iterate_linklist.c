/* 
To start linked lists must have an element and the first element
is the root element;

First we initialize:
Something = &root (the address of root)
Node *curr = &root;	 Something is a Node pointer

Next exit condition:
So this until curr = NULL;
curr != NULL;

Finally iterate:
Here we take an arrow from current building block and point to next.
Building blocks being Nodes.
curr = curr->next;
last element of linked list is always NULL */

#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int x;
	struct Node *next;
} Node;

int	main(int argc, char *argv[])
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -2;
	root.next->next = malloc(sizeof(Node));
	root.next->next->x = 22;
	root.next->next->next = NULL;

	//start with initialization - need address to root because it is on the stack
	Node *curr = &root;
	//exit conditon
	while (curr != NULL)
	{
		// ...
		printf("%d\n", curr->x); //will print both elements because value changes in loop
		curr = curr->next; // simple loop that will go over every element of linked list

	}
/*
	//we don't use forloops but good to learn
	for (Node *curr = &root; curr != NULL; curr = curr->next)
	{
		printf("%d\n", curr->x);
	}
*/
	free(root.next->next);
	free(root.next);
	return 0;
}