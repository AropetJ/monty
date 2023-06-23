#include "monty.h"

/**
 * _add - adds the top two elements of the stack.
 *
 * @top: the top os the stack
 * @count: A counter to traverse the stack or heap
 *
 * Return: No return value
 */

void _add(stack_t **top, unsigned int count)
{
	stack_t *temp;
	int j = 0, i;

	temp = *top;
	while (temp)
	{
		temp = temp->next;
		j++;
	}
	if (j < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	i = temp->n + temp->next->n;
	temp->next->n = i;
	*top = temp->next;
	free(temp);
}
