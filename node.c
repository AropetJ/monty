#include "monty.h"

/**
 * addnode - Adds node to the top of the stack
 * @top: The top of the stack
 * @n: New item added to the stack
 * Return: No return value
 */

void addnode(stack_t **top, int n)
{
	stack_t *new_node, *temp;

	temp = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(EXIT_SUCCESS);
	}
	if (temp)
		temp->prev = new_node;
	new_node->n = n;
	new_node->next = *top;
	new_node->prev = NULL;
	*top = new_node;
}