#include "monty.h"

/**
 * _swap - swaps the top two elements of the stack.
 *
 * @top: The top of the stack.
 * @i: A counter used to traverse the stack or queue
 *
 * Return: Noreturn value
 */

void _swap(stack_t **top, unsigned int i)
{
	int temp, j = 0;
	stack_t *s;

	s = *top;
	while (s)
	{
		s = s->next;
		j++;
	}
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", i);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	s = *top;
	temp = s->n;
	s->n = s->next->n;
	s->next->n = temp;
}
