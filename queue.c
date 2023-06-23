#include "monty.h"

/**
 * _queue - Prints the item at the top of a queue
 *
 * @top: The top of the queue
 * @count: A counter to traverse the queue
 * Return: No return value
 */

void _queue(stack_t **top, unsigned int count)
{
	(void)count;
	(void)top;
	var.flag = 1;
}

/**
 * addqueue - Adds a node to the tail stack
 *
 * @n: A new element to be added
 * @top: The top of the stack
 *
 * Return: No return value
 */

void addqueue(stack_t **top, int n)
{
	stack_t *temp, *node;

	temp = *top;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (temp)
	{
		while (temp->next)
			temp = temp->next;
	}
	if (!temp)
	{
		*top = node;
		node->prev = NULL;
	}
	else
	{
		temp->next = node;
		node->prev = temp;
	}
}
