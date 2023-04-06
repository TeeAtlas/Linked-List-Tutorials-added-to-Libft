#include <stdio.h>
#include <stdlib.h>

/* the stuct is the building block for a linkedlist */
typedef struct Node 
{
	int x;		//integer element
	struct Node	*next;// second building block is a pointer to the same type of element we are in
}	Node;

/*
int	main(int argc, char *argv[])
{
	// Node root, elem2;  //elem2 because root is elem1 and then you have the next elem2
	// the above changes to below when referencing struct
	Node root; 
	root.x = 15;
	// root.next = &elem2;
	// the above changes to below when dynamically allocating memory
	root.next = malloc(sizeof(Node)); 
	// elem2.x = -2;
	// now to access value we say
	root.next->x = -2;
	// elem2.next = NULL;
	root.next->next = NULL; // this is the next pointer and since we know it's the last element inside the linked list it's NULL

	printf("First Node: %d\n", root.x);
	printf("Second Node: %d\n", root.next->x); //or dereferrence ((*root.next).x)
	return 0;
} */


int	main(int argc, char *argv[])
{
	Node root;
	root.x = 15;
	root.next = malloc(sizeof(Node));
	root.next->x = -2;
	
	printf("First Element: %d\n", root.x);
	printf("Second Element: %d\n", root.next->x);

	free(root.next);
	return 0;
}