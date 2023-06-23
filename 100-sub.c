#include "monty.h"

/**
 * _sub- subtracts the top element of the stack
 * from the second top element of the stack
 *
 * @top: The top of the stack
 * @count: A counter to traverse the stack
 *
 * Return: No return value
 */

void _sub(stack_t **top, unsigned int count)
{
	stack_t *temp;
	int node, i;

	temp = *top;
	for (node = 0; temp != NULL; nodes++)
		temp = temp->next;
	if (node < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", count);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	temp = *top;
	i = temp->next->n - temp->n;
	temp->next->n = i;
	*top = temp->next;
	free(temp);
}
