#include "monty.h"

/**
 * free_stack - frees a doubly linked list
 *
 * @top: The top of the stack.
 *
 * Return: No return value
 */

void free_stack(stack_t *top)
{
	stack_t *s;

	s = top;

	while (top)
	{
		s = top->next;
		free(top);
		top = s;
	}
}
