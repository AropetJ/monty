#include "monty.h"

/**
 * _pall - prints all the values on the stack
 * starting from the top of the stack.
 *
 * @top: The top of the stack
 * @count: A counter used to traverse the stack.
 *
 * Return: Does not return.
 */

void _pall(stack_t **top, __attribute__((unused))unsigned int count)
{
	stack_t *s;

	s = *top;
	if (s == NULL)
		return;
	while (s)
	{
		printf("%d\n", s->n);
		s = s->next;
	}
}
