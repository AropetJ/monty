#include "monty.h"

/**
 * _pop - removes the top element of the stack.
 *
 * @top: The top of the stack.
 * @count: A counter to traverse the stack or queue.
 *
 * Return: No return value
 */

void _pop(stack_t **top, unsigned int count)
{
	stack_t *s;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	s = *top;
	*top = s->next;
	free(s);
}
