#include "monty.h"

/**
* main - Entry point
*
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
	FILE *file;
	unsigned int i = 0;
	char *items;
	ssize_t input = 1;
	stack_t *stack = NULL;
	size_t size = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	var.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (input > 0)
	{
		items = NULL;
		input = getline(&items, &size, file);
		var.items = items;
		i++;
		if (input > 0)
		{
			exec(items, &stack, i, file);
		}
		free(items);
	}
	free_stack(stack);
	fclose(file);
	return (0);
}
