#include "monty.h"

/**
 * _push - pushes an element to the stack.
 *
 * @top: The top of the stack.
 * @i: A counter to traverse the stack.
 *
 * Return: No return value
 */

void _push(stack_t **top, unsigned int i)
{
	int j, f = 0, k = 0;

	if (var.arg)
	{
		if (var.arg[0] == '-')
			k++;
		for (; var.arg[k] != '\0'; k++)
		{
			if (var.arg[k] > 57 || var.arg[k] < 48)
				f = 1;
		}
		if (f == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", i);
			fclose(var.file);
			free(var.items);
			free_stack(*top);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", i);
		fclose(var.file);
		free(var.items);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	j = atoi(var.arg);
	if (var.flag == 0)
		addnode(top, j);
	else
		addqueue(top, j);
}
