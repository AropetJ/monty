#include "monty.h"

/**
 * _pint - prints the value at the top of the stack
 * followed by a new line.
 *
 * @top: The top of the stack or queue
 * @count: A counter to traverse the stack.
 *
 * Return: No return value
 */

void _pint(stack_t **top, unsigned int count)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
